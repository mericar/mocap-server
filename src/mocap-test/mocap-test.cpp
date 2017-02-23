#include "VRCom.pb.h"
#include "holojam_generated.h"
// UDP CLIENT WILL REPLACE "easywsclient.hpp"
#include "easywsclient.hpp"
#include <math.h>
#include <chrono>
#include <thread>
#include <iostream>
#include <sstream>
#include <cassert>

int main(int argc, char* argv[]) {

	// UDP CLIENT REPLACES WebSocket easywsclient SETUP
  std::string WebsocketAddr = "ws://127.0.0.1:4567";

  if (argc > 1)
    WebsocketAddr = argv[1];

  using easywsclient::WebSocket;
  WebSocket::pointer ws = WebSocket::from_url(WebsocketAddr);
  assert(ws);

  // replace with holojam_generated.h procedures:
	std::ostringstream bufstr;
  VRCom::Update* msg = new VRCom::Update();
	VRCom::Mocap* mocap = new VRCom::Mocap();
  msg->set_allocated_mocap(mocap);
  auto& subjects = *mocap->mutable_subjects();

  auto& currentSubj = subjects["test"];

  // This while loop prepares the test data and then sends it over the relay.
  const double PI = 2*acos(0.0);
  float angle;
  while(true) {
    for (int i = 0; i < 100; i++) {
    	 angle = 2*PI/100*i;
    	 currentSubj.mutable_pos()->set_x(sin(angle)*3000);
       currentSubj.mutable_pos()->set_y(cos(angle)*3000);
       currentSubj.mutable_pos()->set_z(0);

       //rotation of 10 degrees in Z.
       currentSubj.mutable_rot()->set_x(0.9961946980917455);
       currentSubj.mutable_rot()->set_y(0.08715574274765817);
       currentSubj.mutable_rot()->set_z(0);
       currentSubj.mutable_rot()->set_w(0);

       msg->SerializeToOstream(&bufstr);

       // UDP COMMUNICATOPN WILL REPLACE WebSocket SERVER
       ws->sendBinary(bufstr.str());
       ws->poll();

       std::ostringstream().swap(bufstr);
       bufstr.clear();

       // MIRKO IS UNCERTAIN OF THE UTILITY OF THIS DELAY MECHANISM:
       std::this_thread::sleep_for(std::chrono::milliseconds(20));

    	}
    }
}
