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
CMAKE_SOURCE_DIR = /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/build

# Include any dependencies generated for this target.
include libCE/CMakeFiles/libCE.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libCE/CMakeFiles/libCE.dir/compiler_depend.make

# Include the progress variables for this target.
include libCE/CMakeFiles/libCE.dir/progress.make

# Include the compile flags for this target's objects.
include libCE/CMakeFiles/libCE.dir/flags.make

libCE/CMakeFiles/libCE.dir/ComissionEmployee.cpp.o: libCE/CMakeFiles/libCE.dir/flags.make
libCE/CMakeFiles/libCE.dir/ComissionEmployee.cpp.o: /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/libCE/ComissionEmployee.cpp
libCE/CMakeFiles/libCE.dir/ComissionEmployee.cpp.o: libCE/CMakeFiles/libCE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libCE/CMakeFiles/libCE.dir/ComissionEmployee.cpp.o"
	cd /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/build/libCE && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libCE/CMakeFiles/libCE.dir/ComissionEmployee.cpp.o -MF CMakeFiles/libCE.dir/ComissionEmployee.cpp.o.d -o CMakeFiles/libCE.dir/ComissionEmployee.cpp.o -c /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/libCE/ComissionEmployee.cpp

libCE/CMakeFiles/libCE.dir/ComissionEmployee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libCE.dir/ComissionEmployee.cpp.i"
	cd /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/build/libCE && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/libCE/ComissionEmployee.cpp > CMakeFiles/libCE.dir/ComissionEmployee.cpp.i

libCE/CMakeFiles/libCE.dir/ComissionEmployee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libCE.dir/ComissionEmployee.cpp.s"
	cd /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/build/libCE && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/libCE/ComissionEmployee.cpp -o CMakeFiles/libCE.dir/ComissionEmployee.cpp.s

# Object files for target libCE
libCE_OBJECTS = \
"CMakeFiles/libCE.dir/ComissionEmployee.cpp.o"

# External object files for target libCE
libCE_EXTERNAL_OBJECTS =

libCE/liblibCE.a: libCE/CMakeFiles/libCE.dir/ComissionEmployee.cpp.o
libCE/liblibCE.a: libCE/CMakeFiles/libCE.dir/build.make
libCE/liblibCE.a: libCE/CMakeFiles/libCE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblibCE.a"
	cd /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/build/libCE && $(CMAKE_COMMAND) -P CMakeFiles/libCE.dir/cmake_clean_target.cmake
	cd /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/build/libCE && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libCE.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libCE/CMakeFiles/libCE.dir/build: libCE/liblibCE.a
.PHONY : libCE/CMakeFiles/libCE.dir/build

libCE/CMakeFiles/libCE.dir/clean:
	cd /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/build/libCE && $(CMAKE_COMMAND) -P CMakeFiles/libCE.dir/cmake_clean.cmake
.PHONY : libCE/CMakeFiles/libCE.dir/clean

libCE/CMakeFiles/libCE.dir/depend:
	cd /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/libCE /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/build /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/build/libCE /home/iaa/Desktop/gitStore/MFR2021/Chapter12/BPCE_withCMake/build/libCE/CMakeFiles/libCE.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libCE/CMakeFiles/libCE.dir/depend

