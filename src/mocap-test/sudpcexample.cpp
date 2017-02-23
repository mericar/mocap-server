#include <iostream>
#include <boost/array.hpp>
#include <boost/asio.hpp>
#include "smallUDPClient.hpp"

int main() {
  for(;;){
    boost::asio::io_service io_service;
    smallUDPClient client(io_service, "localhost", "9000");
    client.sendBinary("this is the string");
  }
}
