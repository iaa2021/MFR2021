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
CMAKE_SOURCE_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/build

# Include any dependencies generated for this target.
include src/CMakeFiles/21_21.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/21_21.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/21_21.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/21_21.dir/flags.make

src/CMakeFiles/21_21.dir/21_21.cpp.o: src/CMakeFiles/21_21.dir/flags.make
src/CMakeFiles/21_21.dir/21_21.cpp.o: /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/src/21_21.cpp
src/CMakeFiles/21_21.dir/21_21.cpp.o: src/CMakeFiles/21_21.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/21_21.dir/21_21.cpp.o"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/21_21.dir/21_21.cpp.o -MF CMakeFiles/21_21.dir/21_21.cpp.o.d -o CMakeFiles/21_21.dir/21_21.cpp.o -c /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/src/21_21.cpp

src/CMakeFiles/21_21.dir/21_21.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/21_21.dir/21_21.cpp.i"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/src/21_21.cpp > CMakeFiles/21_21.dir/21_21.cpp.i

src/CMakeFiles/21_21.dir/21_21.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/21_21.dir/21_21.cpp.s"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/src/21_21.cpp -o CMakeFiles/21_21.dir/21_21.cpp.s

# Object files for target 21_21
21_21_OBJECTS = \
"CMakeFiles/21_21.dir/21_21.cpp.o"

# External object files for target 21_21
21_21_EXTERNAL_OBJECTS =

src/21_21: src/CMakeFiles/21_21.dir/21_21.cpp.o
src/21_21: src/CMakeFiles/21_21.dir/build.make
src/21_21: src/CMakeFiles/21_21.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 21_21"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/21_21.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/21_21.dir/build: src/21_21
.PHONY : src/CMakeFiles/21_21.dir/build

src/CMakeFiles/21_21.dir/clean:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/build/src && $(CMAKE_COMMAND) -P CMakeFiles/21_21.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/21_21.dir/clean

src/CMakeFiles/21_21.dir/depend:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3 /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/src /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/build /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/build/src /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/ex21_3/build/src/CMakeFiles/21_21.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/21_21.dir/depend

