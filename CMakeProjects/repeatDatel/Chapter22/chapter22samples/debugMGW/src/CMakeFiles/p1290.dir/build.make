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
CMAKE_SOURCE_DIR = C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\debugMGW

# Include any dependencies generated for this target.
include src/CMakeFiles/p1290.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/p1290.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/p1290.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/p1290.dir/flags.make

src/CMakeFiles/p1290.dir/p1290erato_bitset.cpp.obj: src/CMakeFiles/p1290.dir/flags.make
src/CMakeFiles/p1290.dir/p1290erato_bitset.cpp.obj: src/CMakeFiles/p1290.dir/includes_CXX.rsp
src/CMakeFiles/p1290.dir/p1290erato_bitset.cpp.obj: ../src/p1290erato_bitset.cpp
src/CMakeFiles/p1290.dir/p1290erato_bitset.cpp.obj: src/CMakeFiles/p1290.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\debugMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/p1290.dir/p1290erato_bitset.cpp.obj"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\debugMGW\src && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/p1290.dir/p1290erato_bitset.cpp.obj -MF CMakeFiles\p1290.dir\p1290erato_bitset.cpp.obj.d -o CMakeFiles\p1290.dir\p1290erato_bitset.cpp.obj -c C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\src\p1290erato_bitset.cpp

src/CMakeFiles/p1290.dir/p1290erato_bitset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p1290.dir/p1290erato_bitset.cpp.i"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\debugMGW\src && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\src\p1290erato_bitset.cpp > CMakeFiles\p1290.dir\p1290erato_bitset.cpp.i

src/CMakeFiles/p1290.dir/p1290erato_bitset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p1290.dir/p1290erato_bitset.cpp.s"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\debugMGW\src && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\src\p1290erato_bitset.cpp -o CMakeFiles\p1290.dir\p1290erato_bitset.cpp.s

# Object files for target p1290
p1290_OBJECTS = \
"CMakeFiles/p1290.dir/p1290erato_bitset.cpp.obj"

# External object files for target p1290
p1290_EXTERNAL_OBJECTS =

src/p1290.exe: src/CMakeFiles/p1290.dir/p1290erato_bitset.cpp.obj
src/p1290.exe: src/CMakeFiles/p1290.dir/build.make
src/p1290.exe: src/CMakeFiles/p1290.dir/linklibs.rsp
src/p1290.exe: src/CMakeFiles/p1290.dir/objects1.rsp
src/p1290.exe: src/CMakeFiles/p1290.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\debugMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable p1290.exe"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\debugMGW\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\p1290.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/p1290.dir/build: src/p1290.exe
.PHONY : src/CMakeFiles/p1290.dir/build

src/CMakeFiles/p1290.dir/clean:
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\debugMGW\src && $(CMAKE_COMMAND) -P CMakeFiles\p1290.dir\cmake_clean.cmake
.PHONY : src/CMakeFiles/p1290.dir/clean

src/CMakeFiles/p1290.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\src C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\debugMGW C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\debugMGW\src C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter22\chapter22samples\debugMGW\src\CMakeFiles\p1290.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/p1290.dir/depend
