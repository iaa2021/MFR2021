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
CMAKE_COMMAND = /snap/cmake/1288/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1288/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build

# Include any dependencies generated for this target.
include src/CMakeFiles/desk.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/desk.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/desk.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/desk.dir/flags.make

src/CMakeFiles/desk.dir/desk.cpp.o: src/CMakeFiles/desk.dir/flags.make
src/CMakeFiles/desk.dir/desk.cpp.o: /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/src/desk.cpp
src/CMakeFiles/desk.dir/desk.cpp.o: src/CMakeFiles/desk.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/desk.dir/desk.cpp.o"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/desk.dir/desk.cpp.o -MF CMakeFiles/desk.dir/desk.cpp.o.d -o CMakeFiles/desk.dir/desk.cpp.o -c /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/src/desk.cpp

src/CMakeFiles/desk.dir/desk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/desk.dir/desk.cpp.i"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/src/desk.cpp > CMakeFiles/desk.dir/desk.cpp.i

src/CMakeFiles/desk.dir/desk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/desk.dir/desk.cpp.s"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/src/desk.cpp -o CMakeFiles/desk.dir/desk.cpp.s

# Object files for target desk
desk_OBJECTS = \
"CMakeFiles/desk.dir/desk.cpp.o"

# External object files for target desk
desk_EXTERNAL_OBJECTS =

src/desk: src/CMakeFiles/desk.dir/desk.cpp.o
src/desk: src/CMakeFiles/desk.dir/build.make
src/desk: lib/libmyLib.a
src/desk: src/CMakeFiles/desk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable desk"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/desk.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/desk.dir/build: src/desk
.PHONY : src/CMakeFiles/desk.dir/build

src/CMakeFiles/desk.dir/clean:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src && $(CMAKE_COMMAND) -P CMakeFiles/desk.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/desk.dir/clean

src/CMakeFiles/desk.dir/depend:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/src /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src/CMakeFiles/desk.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/desk.dir/depend

