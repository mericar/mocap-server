add_executable(mocap-test mocap-test.cpp)
target_link_libraries(mocap-test easywsclient smallUDPClient protobuf_lib flatbuf_lib flatbuf VRCom)
target_compile_features(mocap-test PUBLIC cxx_range_for)