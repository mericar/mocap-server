#include <iostream>
#include <boost/array.hpp>
#include <boost/asio.hpp>
#include "smallUDPClient.hpp"

int main() {

  boost::asio::io_service io_service;
  smallUDPClient client(io_service, "localhost", "9000");

  for(;;){
    client.sendBinary("this is the string");
  }

  return 0;
}
