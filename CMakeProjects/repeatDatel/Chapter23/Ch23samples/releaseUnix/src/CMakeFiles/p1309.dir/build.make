# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /snap/cmake/1299/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1299/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/releaseUnix

# Include any dependencies generated for this target.
include src/CMakeFiles/p1309.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/p1309.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/p1309.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/p1309.dir/flags.make

src/CMakeFiles/p1309.dir/p1309const_cast.cpp.o: src/CMakeFiles/p1309.dir/flags.make
src/CMakeFiles/p1309.dir/p1309const_cast.cpp.o: /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/src/p1309const_cast.cpp
src/CMakeFiles/p1309.dir/p1309const_cast.cpp.o: src/CMakeFiles/p1309.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/releaseUnix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/p1309.dir/p1309const_cast.cpp.o"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/releaseUnix/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/p1309.dir/p1309const_cast.cpp.o -MF CMakeFiles/p1309.dir/p1309const_cast.cpp.o.d -o CMakeFiles/p1309.dir/p1309const_cast.cpp.o -c /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/src/p1309const_cast.cpp

src/CMakeFiles/p1309.dir/p1309const_cast.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p1309.dir/p1309const_cast.cpp.i"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/releaseUnix/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/src/p1309const_cast.cpp > CMakeFiles/p1309.dir/p1309const_cast.cpp.i

src/CMakeFiles/p1309.dir/p1309const_cast.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p1309.dir/p1309const_cast.cpp.s"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/releaseUnix/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/src/p1309const_cast.cpp -o CMakeFiles/p1309.dir/p1309const_cast.cpp.s

# Object files for target p1309
p1309_OBJECTS = \
"CMakeFiles/p1309.dir/p1309const_cast.cpp.o"

# External object files for target p1309
p1309_EXTERNAL_OBJECTS =

src/p1309: src/CMakeFiles/p1309.dir/p1309const_cast.cpp.o
src/p1309: src/CMakeFiles/p1309.dir/build.make
src/p1309: src/CMakeFiles/p1309.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/releaseUnix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable p1309"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/releaseUnix/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/p1309.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/p1309.dir/build: src/p1309
.PHONY : src/CMakeFiles/p1309.dir/build

src/CMakeFiles/p1309.dir/clean:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/releaseUnix/src && $(CMAKE_COMMAND) -P CMakeFiles/p1309.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/p1309.dir/clean

src/CMakeFiles/p1309.dir/depend:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/releaseUnix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/src /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/releaseUnix /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/releaseUnix/src /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter23/Ch23samples/releaseUnix/src/CMakeFiles/p1309.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/p1309.dir/depend

