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
CMAKE_SOURCE_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/debugMGW

# Include any dependencies generated for this target.
include src/CMakeFiles/g4.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/g4.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/g4.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/g4.dir/flags.make

src/CMakeFiles/g4.dir/g4.cpp.o: src/CMakeFiles/g4.dir/flags.make
src/CMakeFiles/g4.dir/g4.cpp.o: /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/src/g4.cpp
src/CMakeFiles/g4.dir/g4.cpp.o: src/CMakeFiles/g4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/debugMGW/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/g4.dir/g4.cpp.o"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/debugMGW/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/g4.dir/g4.cpp.o -MF CMakeFiles/g4.dir/g4.cpp.o.d -o CMakeFiles/g4.dir/g4.cpp.o -c /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/src/g4.cpp

src/CMakeFiles/g4.dir/g4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/g4.dir/g4.cpp.i"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/debugMGW/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/src/g4.cpp > CMakeFiles/g4.dir/g4.cpp.i

src/CMakeFiles/g4.dir/g4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/g4.dir/g4.cpp.s"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/debugMGW/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/src/g4.cpp -o CMakeFiles/g4.dir/g4.cpp.s

# Object files for target g4
g4_OBJECTS = \
"CMakeFiles/g4.dir/g4.cpp.o"

# External object files for target g4
g4_EXTERNAL_OBJECTS =

src/g4: src/CMakeFiles/g4.dir/g4.cpp.o
src/g4: src/CMakeFiles/g4.dir/build.make
src/g4: src/CMakeFiles/g4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/debugMGW/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable g4"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/debugMGW/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/g4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/g4.dir/build: src/g4
.PHONY : src/CMakeFiles/g4.dir/build

src/CMakeFiles/g4.dir/clean:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/debugMGW/src && $(CMAKE_COMMAND) -P CMakeFiles/g4.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/g4.dir/clean

src/CMakeFiles/g4.dir/depend:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/debugMGW && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/src /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/debugMGW /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/debugMGW/src /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/ApplicationG/appGexercises/debugMGW/src/CMakeFiles/g4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/g4.dir/depend

