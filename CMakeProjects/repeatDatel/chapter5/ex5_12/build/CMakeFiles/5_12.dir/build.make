# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /snap/cmake/1156/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1156/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12/build

# Include any dependencies generated for this target.
include CMakeFiles/5_12.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/5_12.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/5_12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/5_12.dir/flags.make

CMakeFiles/5_12.dir/5_12.cpp.o: CMakeFiles/5_12.dir/flags.make
CMakeFiles/5_12.dir/5_12.cpp.o: /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12/5_12.cpp
CMakeFiles/5_12.dir/5_12.cpp.o: CMakeFiles/5_12.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/5_12.dir/5_12.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/5_12.dir/5_12.cpp.o -MF CMakeFiles/5_12.dir/5_12.cpp.o.d -o CMakeFiles/5_12.dir/5_12.cpp.o -c /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12/5_12.cpp

CMakeFiles/5_12.dir/5_12.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/5_12.dir/5_12.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12/5_12.cpp > CMakeFiles/5_12.dir/5_12.cpp.i

CMakeFiles/5_12.dir/5_12.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/5_12.dir/5_12.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12/5_12.cpp -o CMakeFiles/5_12.dir/5_12.cpp.s

# Object files for target 5_12
5_12_OBJECTS = \
"CMakeFiles/5_12.dir/5_12.cpp.o"

# External object files for target 5_12
5_12_EXTERNAL_OBJECTS =

5_12: CMakeFiles/5_12.dir/5_12.cpp.o
5_12: CMakeFiles/5_12.dir/build.make
5_12: CMakeFiles/5_12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 5_12"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/5_12.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/5_12.dir/build: 5_12
.PHONY : CMakeFiles/5_12.dir/build

CMakeFiles/5_12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/5_12.dir/cmake_clean.cmake
.PHONY : CMakeFiles/5_12.dir/clean

CMakeFiles/5_12.dir/depend:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12 /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12 /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12/build /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12/build /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/repeatDatel/chapter5/ex5_12/build/CMakeFiles/5_12.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/5_12.dir/depend

