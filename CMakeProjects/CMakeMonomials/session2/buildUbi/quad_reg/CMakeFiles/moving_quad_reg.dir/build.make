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
CMAKE_COMMAND = /snap/cmake/1153/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1153/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/buildUbi

# Include any dependencies generated for this target.
include quad_reg/CMakeFiles/moving_quad_reg.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include quad_reg/CMakeFiles/moving_quad_reg.dir/compiler_depend.make

# Include the progress variables for this target.
include quad_reg/CMakeFiles/moving_quad_reg.dir/progress.make

# Include the compile flags for this target's objects.
include quad_reg/CMakeFiles/moving_quad_reg.dir/flags.make

quad_reg/CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.o: quad_reg/CMakeFiles/moving_quad_reg.dir/flags.make
quad_reg/CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.o: /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/quad_reg/MovingQuadReg.cpp
quad_reg/CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.o: quad_reg/CMakeFiles/moving_quad_reg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/buildUbi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object quad_reg/CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.o"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/buildUbi/quad_reg && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT quad_reg/CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.o -MF CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.o.d -o CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.o -c /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/quad_reg/MovingQuadReg.cpp

quad_reg/CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.i"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/buildUbi/quad_reg && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/quad_reg/MovingQuadReg.cpp > CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.i

quad_reg/CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.s"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/buildUbi/quad_reg && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/quad_reg/MovingQuadReg.cpp -o CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.s

# Object files for target moving_quad_reg
moving_quad_reg_OBJECTS = \
"CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.o"

# External object files for target moving_quad_reg
moving_quad_reg_EXTERNAL_OBJECTS =

quad_reg/libmoving_quad_reg.a: quad_reg/CMakeFiles/moving_quad_reg.dir/MovingQuadReg.cpp.o
quad_reg/libmoving_quad_reg.a: quad_reg/CMakeFiles/moving_quad_reg.dir/build.make
quad_reg/libmoving_quad_reg.a: quad_reg/CMakeFiles/moving_quad_reg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/buildUbi/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmoving_quad_reg.a"
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/buildUbi/quad_reg && $(CMAKE_COMMAND) -P CMakeFiles/moving_quad_reg.dir/cmake_clean_target.cmake
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/buildUbi/quad_reg && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/moving_quad_reg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
quad_reg/CMakeFiles/moving_quad_reg.dir/build: quad_reg/libmoving_quad_reg.a
.PHONY : quad_reg/CMakeFiles/moving_quad_reg.dir/build

quad_reg/CMakeFiles/moving_quad_reg.dir/clean:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/buildUbi/quad_reg && $(CMAKE_COMMAND) -P CMakeFiles/moving_quad_reg.dir/cmake_clean.cmake
.PHONY : quad_reg/CMakeFiles/moving_quad_reg.dir/clean

quad_reg/CMakeFiles/moving_quad_reg.dir/depend:
	cd /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/buildUbi && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2 /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/quad_reg /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/buildUbi /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/buildUbi/quad_reg /home/iaa/Desktop/gitStore/MFR2021/CMakeProjects/session2/buildUbi/quad_reg/CMakeFiles/moving_quad_reg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : quad_reg/CMakeFiles/moving_quad_reg.dir/depend
