# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\buildMGW

# Include any dependencies generated for this target.
include lib/CMakeFiles/myLib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/CMakeFiles/myLib.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/myLib.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/myLib.dir/flags.make

lib/CMakeFiles/myLib.dir/ClientData.cpp.obj: lib/CMakeFiles/myLib.dir/flags.make
lib/CMakeFiles/myLib.dir/ClientData.cpp.obj: lib/CMakeFiles/myLib.dir/includes_CXX.rsp
lib/CMakeFiles/myLib.dir/ClientData.cpp.obj: ../lib/ClientData.cpp
lib/CMakeFiles/myLib.dir/ClientData.cpp.obj: lib/CMakeFiles/myLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\buildMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/myLib.dir/ClientData.cpp.obj"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\buildMGW\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/CMakeFiles/myLib.dir/ClientData.cpp.obj -MF CMakeFiles\myLib.dir\ClientData.cpp.obj.d -o CMakeFiles\myLib.dir\ClientData.cpp.obj -c C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\lib\ClientData.cpp

lib/CMakeFiles/myLib.dir/ClientData.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myLib.dir/ClientData.cpp.i"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\buildMGW\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\lib\ClientData.cpp > CMakeFiles\myLib.dir\ClientData.cpp.i

lib/CMakeFiles/myLib.dir/ClientData.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myLib.dir/ClientData.cpp.s"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\buildMGW\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\lib\ClientData.cpp -o CMakeFiles\myLib.dir\ClientData.cpp.s

# Object files for target myLib
myLib_OBJECTS = \
"CMakeFiles/myLib.dir/ClientData.cpp.obj"

# External object files for target myLib
myLib_EXTERNAL_OBJECTS =

lib/libmyLib.a: lib/CMakeFiles/myLib.dir/ClientData.cpp.obj
lib/libmyLib.a: lib/CMakeFiles/myLib.dir/build.make
lib/libmyLib.a: lib/CMakeFiles/myLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\buildMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmyLib.a"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\buildMGW\lib && $(CMAKE_COMMAND) -P CMakeFiles\myLib.dir\cmake_clean_target.cmake
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\buildMGW\lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\myLib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/myLib.dir/build: lib/libmyLib.a
.PHONY : lib/CMakeFiles/myLib.dir/build

lib/CMakeFiles/myLib.dir/clean:
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\buildMGW\lib && $(CMAKE_COMMAND) -P CMakeFiles\myLib.dir\cmake_clean.cmake
.PHONY : lib/CMakeFiles/myLib.dir/clean

lib/CMakeFiles/myLib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\lib C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\buildMGW C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\buildMGW\lib C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter17\ClientData\buildMGW\lib\CMakeFiles\myLib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/myLib.dir/depend

