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
include flatbuf/CMakeFiles/flatbuf.dir/depend.make

# Include the progress variables for this target.
include flatbuf/CMakeFiles/flatbuf.dir/progress.make

# Include the compile flags for this target's objects.
include flatbuf/CMakeFiles/flatbuf.dir/flags.make

flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.o: flatbuf/CMakeFiles/flatbuf.dir/flags.make
flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.o: /Users/ralek/ecuad/mocap-server/src/flatbuf/holojam_generated.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ralek/ecuad/mocap-server/Unix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.o"
	cd /Users/ralek/ecuad/mocap-server/Unix/flatbuf && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/flatbuf.dir/holojam_generated.cc.o -c /Users/ralek/ecuad/mocap-server/src/flatbuf/holojam_generated.cc

flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flatbuf.dir/holojam_generated.cc.i"
	cd /Users/ralek/ecuad/mocap-server/Unix/flatbuf && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ralek/ecuad/mocap-server/src/flatbuf/holojam_generated.cc > CMakeFiles/flatbuf.dir/holojam_generated.cc.i

flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flatbuf.dir/holojam_generated.cc.s"
	cd /Users/ralek/ecuad/mocap-server/Unix/flatbuf && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ralek/ecuad/mocap-server/src/flatbuf/holojam_generated.cc -o CMakeFiles/flatbuf.dir/holojam_generated.cc.s

flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.o.requires:

.PHONY : flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.o.requires

flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.o.provides: flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.o.requires
	$(MAKE) -f flatbuf/CMakeFiles/flatbuf.dir/build.make flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.o.provides.build
.PHONY : flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.o.provides

flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.o.provides.build: flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.o


# Object files for target flatbuf
flatbuf_OBJECTS = \
"CMakeFiles/flatbuf.dir/holojam_generated.cc.o"

# External object files for target flatbuf
flatbuf_EXTERNAL_OBJECTS =

/Users/ralek/ecuad/mocap-server/bin/libflatbuf.a: flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.o
/Users/ralek/ecuad/mocap-server/bin/libflatbuf.a: flatbuf/CMakeFiles/flatbuf.dir/build.make
/Users/ralek/ecuad/mocap-server/bin/libflatbuf.a: flatbuf/CMakeFiles/flatbuf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ralek/ecuad/mocap-server/Unix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library /Users/ralek/ecuad/mocap-server/bin/libflatbuf.a"
	cd /Users/ralek/ecuad/mocap-server/Unix/flatbuf && $(CMAKE_COMMAND) -P CMakeFiles/flatbuf.dir/cmake_clean_target.cmake
	cd /Users/ralek/ecuad/mocap-server/Unix/flatbuf && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/flatbuf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
flatbuf/CMakeFiles/flatbuf.dir/build: /Users/ralek/ecuad/mocap-server/bin/libflatbuf.a

.PHONY : flatbuf/CMakeFiles/flatbuf.dir/build

flatbuf/CMakeFiles/flatbuf.dir/requires: flatbuf/CMakeFiles/flatbuf.dir/holojam_generated.cc.o.requires

.PHONY : flatbuf/CMakeFiles/flatbuf.dir/requires

flatbuf/CMakeFiles/flatbuf.dir/clean:
	cd /Users/ralek/ecuad/mocap-server/Unix/flatbuf && $(CMAKE_COMMAND) -P CMakeFiles/flatbuf.dir/cmake_clean.cmake
.PHONY : flatbuf/CMakeFiles/flatbuf.dir/clean

flatbuf/CMakeFiles/flatbuf.dir/depend:
	cd /Users/ralek/ecuad/mocap-server/Unix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ralek/ecuad/mocap-server/src /Users/ralek/ecuad/mocap-server/src/flatbuf /Users/ralek/ecuad/mocap-server/Unix /Users/ralek/ecuad/mocap-server/Unix/flatbuf /Users/ralek/ecuad/mocap-server/Unix/flatbuf/CMakeFiles/flatbuf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : flatbuf/CMakeFiles/flatbuf.dir/depend
