#include "VRCom.pb.h"
// UDP CLIENT WILL REPLACE "easywsclient.hpp"
#include "holojam_generated.h"
#include "easywsclient.hpp"
#include "smallUDPClient.hpp"
#include <boost/array.hpp>
#include <boost/asio.hpp>
#include <math.h>
#include <chrono>
#include <thread>
#include <iostream>
#include <sstream>
#include <cassert>

using namespace Holojam::Protocol;

int main(int argc, char* argv[]) {

	// UDP CLIENT REPLACES WebSocket easywsclient SETUP
  std::string host = "localhost";
  std::string port = "4567";

  // Create IO service
  boost::asio::io_service clientIoService;
  // Create UDP client
  smallUDPClient client(clientIoService, host, port);
  assert(&client);

  // This while loop prepares the test data and then sends it over the relay.
  const double PI = 2*acos(0.0);
  float angle;

  while(true) {

    for (int i = 0; i < 100; i++) {

      angle = 2*PI/100*i;

      // Create and init a FlatBufferBuilder
      flatbuffers::FlatBufferBuilder builder(1024);

      // Nugget Label
      auto flakeLabel = builder.CreateString("vec3");
      auto scop = builder.CreateString("IAA");
      auto orig = builder.CreateString("mocap-test");

      auto v3 = Vector3(sin(angle)*3000, cos(angle)*3000, 0);
      auto v4 = Vector4(0.9961946980917455, 0.08715574274765817, 0, 0);

      /*
      std::vector<flatbuffers::Offset<Vector3>> vec3s_vector;
      vec3s_vector.push_back(v3);
      auto vec3s = builder.CreateVector(vec3s_vector);

      std::vector<flatbuffers::Offset<Vector4>> vec4s_vector;
      vec4s_vector.push_back(v4);
      auto vec4s = builder.CreateVector(vec4s_vector);
      */

      // create a flake:
      FlakeBuilder flake_builder(builder);
      flake_builder.add_label(flakeLabel);
      flake_builder.add_vector3s(v3);
      flake_builder.add_vector4s(v4);
      auto flaks = flake_builder.Finish();

      // create the nugget and finish the serialization:
      auto nug = CreateNugget(builder, scop, orig, NuggetType_UPDATE, flaks);
      builder.Finish(nug);

      //Buffer and it's size:
      uint8_t *buf = builder.GetBufferPointer();
      int bufsz = builder.GetSize();

      // Get nugget data tht was made above:
      auto ngt = GetNugget(buf);
      auto fs = ngt->flakes();
      auto lbl = fs->Get(1)->label()->str();

      // UDP Client
      client.sendBinary(lbl);

       // MIRKO IS UNCERTAIN OF THE UTILITY OF THIS DELAY MECHANISM:
       std::this_thread::sleep_for(std::chrono::milliseconds(20));

    	}
    }
}
