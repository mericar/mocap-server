# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.7.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.7.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ralek/ecuad/mocap-server/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ralek/ecuad/mocap-server/Unix

# Include any dependencies generated for this target.
include CMakeFiles/mocap-server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mocap-server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mocap-server.dir/flags.make

CMakeFiles/mocap-server.dir/mocap-server.cpp.o: CMakeFiles/mocap-server.dir/flags.make
CMakeFiles/mocap-server.dir/mocap-server.cpp.o: /Users/ralek/ecuad/mocap-server/src/mocap-server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ralek/ecuad/mocap-server/Unix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mocap-server.dir/mocap-server.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mocap-server.dir/mocap-server.cpp.o -c /Users/ralek/ecuad/mocap-server/src/mocap-server.cpp

CMakeFiles/mocap-server.dir/mocap-server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mocap-server.dir/mocap-server.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ralek/ecuad/mocap-server/src/mocap-server.cpp > CMakeFiles/mocap-server.dir/mocap-server.cpp.i

CMakeFiles/mocap-server.dir/mocap-server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mocap-server.dir/mocap-server.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ralek/ecuad/mocap-server/src/mocap-server.cpp -o CMakeFiles/mocap-server.dir/mocap-server.cpp.s

CMakeFiles/mocap-server.dir/mocap-server.cpp.o.requires:

.PHONY : CMakeFiles/mocap-server.dir/mocap-server.cpp.o.requires

CMakeFiles/mocap-server.dir/mocap-server.cpp.o.provides: CMakeFiles/mocap-server.dir/mocap-server.cpp.o.requires
	$(MAKE) -f CMakeFiles/mocap-server.dir/build.make CMakeFiles/mocap-server.dir/mocap-server.cpp.o.provides.build
.PHONY : CMakeFiles/mocap-server.dir/mocap-server.cpp.o.provides

CMakeFiles/mocap-server.dir/mocap-server.cpp.o.provides.build: CMakeFiles/mocap-server.dir/mocap-server.cpp.o


# Object files for target mocap-server
mocap__server_OBJECTS = \
"CMakeFiles/mocap-server.dir/mocap-server.cpp.o"

# External object files for target mocap-server
mocap__server_EXTERNAL_OBJECTS =

/Users/ralek/ecuad/mocap-server/bin/mocap-server: CMakeFiles/mocap-server.dir/mocap-server.cpp.o
/Users/ralek/ecuad/mocap-server/bin/mocap-server: CMakeFiles/mocap-server.dir/build.make
/Users/ralek/ecuad/mocap-server/bin/mocap-server: /Users/ralek/ecuad/mocap-server/src/../lib/Vicon_DataStream_SDK_1.3.0.57137h_MAC/libViconDataStreamSDK_CPP.dylib
/Users/ralek/ecuad/mocap-server/bin/mocap-server: /Users/ralek/ecuad/mocap-server/bin/libsmallUDPClient.a
/Users/ralek/ecuad/mocap-server/bin/mocap-server: /Users/ralek/ecuad/mocap-server/bin/libeasywsclient.a
/Users/ralek/ecuad/mocap-server/bin/mocap-server: /usr/local/lib/libprotobuf.a
/Users/ralek/ecuad/mocap-server/bin/mocap-server: /usr/local/cellar/flatbuffers/1.6.0/lib/libflatbuffers.a
/Users/ralek/ecuad/mocap-server/bin/mocap-server: /usr/local/lib/libboost_system-mt.a
/Users/ralek/ecuad/mocap-server/bin/mocap-server: /Users/ralek/ecuad/mocap-server/bin/libVRCom.a
/Users/ralek/ecuad/mocap-server/bin/mocap-server: CMakeFiles/mocap-server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ralek/ecuad/mocap-server/Unix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /Users/ralek/ecuad/mocap-server/bin/mocap-server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mocap-server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mocap-server.dir/build: /Users/ralek/ecuad/mocap-server/bin/mocap-server

.PHONY : CMakeFiles/mocap-server.dir/build

CMakeFiles/mocap-server.dir/requires: CMakeFiles/mocap-server.dir/mocap-server.cpp.o.requires

.PHONY : CMakeFiles/mocap-server.dir/requires

CMakeFiles/mocap-server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mocap-server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mocap-server.dir/clean

CMakeFiles/mocap-server.dir/depend:
	cd /Users/ralek/ecuad/mocap-server/Unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ralek/ecuad/mocap-server/src /Users/ralek/ecuad/mocap-server/src /Users/ralek/ecuad/mocap-server/Unix /Users/ralek/ecuad/mocap-server/Unix /Users/ralek/ecuad/mocap-server/Unix/CMakeFiles/mocap-server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mocap-server.dir/depend

