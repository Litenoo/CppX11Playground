# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/liten/Documents/cpp/openGLTEsting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liten/Documents/cpp/openGLTEsting/build

# Include any dependencies generated for this target.
include CMakeFiles/SimpleX11App.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SimpleX11App.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SimpleX11App.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SimpleX11App.dir/flags.make

CMakeFiles/SimpleX11App.dir/src/main.cpp.o: CMakeFiles/SimpleX11App.dir/flags.make
CMakeFiles/SimpleX11App.dir/src/main.cpp.o: /home/liten/Documents/cpp/openGLTEsting/src/main.cpp
CMakeFiles/SimpleX11App.dir/src/main.cpp.o: CMakeFiles/SimpleX11App.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/liten/Documents/cpp/openGLTEsting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SimpleX11App.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SimpleX11App.dir/src/main.cpp.o -MF CMakeFiles/SimpleX11App.dir/src/main.cpp.o.d -o CMakeFiles/SimpleX11App.dir/src/main.cpp.o -c /home/liten/Documents/cpp/openGLTEsting/src/main.cpp

CMakeFiles/SimpleX11App.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SimpleX11App.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liten/Documents/cpp/openGLTEsting/src/main.cpp > CMakeFiles/SimpleX11App.dir/src/main.cpp.i

CMakeFiles/SimpleX11App.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SimpleX11App.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liten/Documents/cpp/openGLTEsting/src/main.cpp -o CMakeFiles/SimpleX11App.dir/src/main.cpp.s

# Object files for target SimpleX11App
SimpleX11App_OBJECTS = \
"CMakeFiles/SimpleX11App.dir/src/main.cpp.o"

# External object files for target SimpleX11App
SimpleX11App_EXTERNAL_OBJECTS =

SimpleX11App: CMakeFiles/SimpleX11App.dir/src/main.cpp.o
SimpleX11App: CMakeFiles/SimpleX11App.dir/build.make
SimpleX11App: /usr/lib/x86_64-linux-gnu/libX11.so
SimpleX11App: CMakeFiles/SimpleX11App.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/liten/Documents/cpp/openGLTEsting/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SimpleX11App"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SimpleX11App.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SimpleX11App.dir/build: SimpleX11App
.PHONY : CMakeFiles/SimpleX11App.dir/build

CMakeFiles/SimpleX11App.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SimpleX11App.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SimpleX11App.dir/clean

CMakeFiles/SimpleX11App.dir/depend:
	cd /home/liten/Documents/cpp/openGLTEsting/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liten/Documents/cpp/openGLTEsting /home/liten/Documents/cpp/openGLTEsting /home/liten/Documents/cpp/openGLTEsting/build /home/liten/Documents/cpp/openGLTEsting/build /home/liten/Documents/cpp/openGLTEsting/build/CMakeFiles/SimpleX11App.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/SimpleX11App.dir/depend

