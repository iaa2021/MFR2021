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
CMAKE_SOURCE_DIR = C:\Users\ivano\Desktop\GitStore\MFR2021\2022\Chapter21\p1165

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ivano\Desktop\GitStore\MFR2021\2022\Chapter21\p1165\buildB

# Include any dependencies generated for this target.
include CMakeFiles/bits.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bits.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bits.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bits.dir/flags.make

CMakeFiles/bits.dir/1165.cpp.obj: CMakeFiles/bits.dir/flags.make
CMakeFiles/bits.dir/1165.cpp.obj: ../1165.cpp
CMakeFiles/bits.dir/1165.cpp.obj: CMakeFiles/bits.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ivano\Desktop\GitStore\MFR2021\2022\Chapter21\p1165\buildB\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bits.dir/1165.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bits.dir/1165.cpp.obj -MF CMakeFiles\bits.dir\1165.cpp.obj.d -o CMakeFiles\bits.dir\1165.cpp.obj -c C:\Users\ivano\Desktop\GitStore\MFR2021\2022\Chapter21\p1165\1165.cpp

CMakeFiles/bits.dir/1165.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bits.dir/1165.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ivano\Desktop\GitStore\MFR2021\2022\Chapter21\p1165\1165.cpp > CMakeFiles\bits.dir\1165.cpp.i

CMakeFiles/bits.dir/1165.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bits.dir/1165.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ivano\Desktop\GitStore\MFR2021\2022\Chapter21\p1165\1165.cpp -o CMakeFiles\bits.dir\1165.cpp.s

# Object files for target bits
bits_OBJECTS = \
"CMakeFiles/bits.dir/1165.cpp.obj"

# External object files for target bits
bits_EXTERNAL_OBJECTS =

bits.exe: CMakeFiles/bits.dir/1165.cpp.obj
bits.exe: CMakeFiles/bits.dir/build.make
bits.exe: CMakeFiles/bits.dir/linklibs.rsp
bits.exe: CMakeFiles/bits.dir/objects1.rsp
bits.exe: CMakeFiles/bits.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ivano\Desktop\GitStore\MFR2021\2022\Chapter21\p1165\buildB\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bits.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\bits.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bits.dir/build: bits.exe
.PHONY : CMakeFiles/bits.dir/build

CMakeFiles/bits.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\bits.dir\cmake_clean.cmake
.PHONY : CMakeFiles/bits.dir/clean

CMakeFiles/bits.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ivano\Desktop\GitStore\MFR2021\2022\Chapter21\p1165 C:\Users\ivano\Desktop\GitStore\MFR2021\2022\Chapter21\p1165 C:\Users\ivano\Desktop\GitStore\MFR2021\2022\Chapter21\p1165\buildB C:\Users\ivano\Desktop\GitStore\MFR2021\2022\Chapter21\p1165\buildB C:\Users\ivano\Desktop\GitStore\MFR2021\2022\Chapter21\p1165\buildB\CMakeFiles\bits.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bits.dir/depend

