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
CMAKE_SOURCE_DIR = C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\build

# Include any dependencies generated for this target.
include lib/CMakeFiles/lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/CMakeFiles/lib.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/lib.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/lib.dir/flags.make

lib/CMakeFiles/lib.dir/lib.cpp.obj: lib/CMakeFiles/lib.dir/flags.make
lib/CMakeFiles/lib.dir/lib.cpp.obj: lib/CMakeFiles/lib.dir/includes_CXX.rsp
lib/CMakeFiles/lib.dir/lib.cpp.obj: ../lib/lib.cpp
lib/CMakeFiles/lib.dir/lib.cpp.obj: lib/CMakeFiles/lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/lib.dir/lib.cpp.obj"
	cd /d C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\build\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/CMakeFiles/lib.dir/lib.cpp.obj -MF CMakeFiles\lib.dir\lib.cpp.obj.d -o CMakeFiles\lib.dir\lib.cpp.obj -c C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\lib\lib.cpp

lib/CMakeFiles/lib.dir/lib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib.dir/lib.cpp.i"
	cd /d C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\build\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\lib\lib.cpp > CMakeFiles\lib.dir\lib.cpp.i

lib/CMakeFiles/lib.dir/lib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib.dir/lib.cpp.s"
	cd /d C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\build\lib && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\lib\lib.cpp -o CMakeFiles\lib.dir\lib.cpp.s

# Object files for target lib
lib_OBJECTS = \
"CMakeFiles/lib.dir/lib.cpp.obj"

# External object files for target lib
lib_EXTERNAL_OBJECTS =

lib/liblib.a: lib/CMakeFiles/lib.dir/lib.cpp.obj
lib/liblib.a: lib/CMakeFiles/lib.dir/build.make
lib/liblib.a: lib/CMakeFiles/lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblib.a"
	cd /d C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\build\lib && $(CMAKE_COMMAND) -P CMakeFiles\lib.dir\cmake_clean_target.cmake
	cd /d C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\build\lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/lib.dir/build: lib/liblib.a
.PHONY : lib/CMakeFiles/lib.dir/build

lib/CMakeFiles/lib.dir/clean:
	cd /d C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\build\lib && $(CMAKE_COMMAND) -P CMakeFiles\lib.dir\cmake_clean.cmake
.PHONY : lib/CMakeFiles/lib.dir/clean

lib/CMakeFiles/lib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4 C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\lib C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\build C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\build\lib C:\Users\ivano\Desktop\GitStore\MFR2021\CMakeProjects\OTUS\otusEx4\build\lib\CMakeFiles\lib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/lib.dir/depend
