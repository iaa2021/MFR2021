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
include src/CMakeFiles/deskBits.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/deskBits.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/deskBits.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/deskBits.dir/flags.make

src/CMakeFiles/deskBits.dir/deskBits.cpp.o: src/CMakeFiles/deskBits.dir/flags.make
src/CMakeFiles/deskBits.dir/deskBits.cpp.o: /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/src/deskBits.cpp
src/CMakeFiles/deskBits.dir/deskBits.cpp.o: src/CMakeFiles/deskBits.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/deskBits.dir/deskBits.cpp.o"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/deskBits.dir/deskBits.cpp.o -MF CMakeFiles/deskBits.dir/deskBits.cpp.o.d -o CMakeFiles/deskBits.dir/deskBits.cpp.o -c /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/src/deskBits.cpp

src/CMakeFiles/deskBits.dir/deskBits.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/deskBits.dir/deskBits.cpp.i"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/src/deskBits.cpp > CMakeFiles/deskBits.dir/deskBits.cpp.i

src/CMakeFiles/deskBits.dir/deskBits.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/deskBits.dir/deskBits.cpp.s"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/src/deskBits.cpp -o CMakeFiles/deskBits.dir/deskBits.cpp.s

# Object files for target deskBits
deskBits_OBJECTS = \
"CMakeFiles/deskBits.dir/deskBits.cpp.o"

# External object files for target deskBits
deskBits_EXTERNAL_OBJECTS =

src/deskBits: src/CMakeFiles/deskBits.dir/deskBits.cpp.o
src/deskBits: src/CMakeFiles/deskBits.dir/build.make
src/deskBits: libBits/libmyLibBits.a
src/deskBits: src/CMakeFiles/deskBits.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable deskBits"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/deskBits.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/deskBits.dir/build: src/deskBits
.PHONY : src/CMakeFiles/deskBits.dir/build

src/CMakeFiles/deskBits.dir/clean:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src && $(CMAKE_COMMAND) -P CMakeFiles/deskBits.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/deskBits.dir/clean

src/CMakeFiles/deskBits.dir/depend:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/src /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/Chapter21/p1159DeskOfCards/build/src/CMakeFiles/deskBits.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/deskBits.dir/depend

