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
CMAKE_SOURCE_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/debugUnix

# Include any dependencies generated for this target.
include src/CMakeFiles/d2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/d2.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/d2.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/d2.dir/flags.make

src/CMakeFiles/d2.dir/d2.cpp.o: src/CMakeFiles/d2.dir/flags.make
src/CMakeFiles/d2.dir/d2.cpp.o: /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/src/d2.cpp
src/CMakeFiles/d2.dir/d2.cpp.o: src/CMakeFiles/d2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/debugUnix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/d2.dir/d2.cpp.o"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/debugUnix/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/d2.dir/d2.cpp.o -MF CMakeFiles/d2.dir/d2.cpp.o.d -o CMakeFiles/d2.dir/d2.cpp.o -c /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/src/d2.cpp

src/CMakeFiles/d2.dir/d2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/d2.dir/d2.cpp.i"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/debugUnix/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/src/d2.cpp > CMakeFiles/d2.dir/d2.cpp.i

src/CMakeFiles/d2.dir/d2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/d2.dir/d2.cpp.s"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/debugUnix/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/src/d2.cpp -o CMakeFiles/d2.dir/d2.cpp.s

# Object files for target d2
d2_OBJECTS = \
"CMakeFiles/d2.dir/d2.cpp.o"

# External object files for target d2
d2_EXTERNAL_OBJECTS =

src/d2: src/CMakeFiles/d2.dir/d2.cpp.o
src/d2: src/CMakeFiles/d2.dir/build.make
src/d2: src/CMakeFiles/d2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/debugUnix/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable d2"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/debugUnix/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/d2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/d2.dir/build: src/d2
.PHONY : src/CMakeFiles/d2.dir/build

src/CMakeFiles/d2.dir/clean:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/debugUnix/src && $(CMAKE_COMMAND) -P CMakeFiles/d2.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/d2.dir/clean

src/CMakeFiles/d2.dir/depend:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/debugUnix && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/src /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/debugUnix /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/debugUnix/src /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationD/debugUnix/src/CMakeFiles/d2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/d2.dir/depend

