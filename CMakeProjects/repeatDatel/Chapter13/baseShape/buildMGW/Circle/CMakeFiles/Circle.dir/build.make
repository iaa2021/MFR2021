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
CMAKE_SOURCE_DIR = C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW

# Include any dependencies generated for this target.
include Circle/CMakeFiles/Circle.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Circle/CMakeFiles/Circle.dir/compiler_depend.make

# Include the progress variables for this target.
include Circle/CMakeFiles/Circle.dir/progress.make

# Include the compile flags for this target's objects.
include Circle/CMakeFiles/Circle.dir/flags.make

Circle/CMakeFiles/Circle.dir/Circle.cpp.obj: Circle/CMakeFiles/Circle.dir/flags.make
Circle/CMakeFiles/Circle.dir/Circle.cpp.obj: Circle/CMakeFiles/Circle.dir/includes_CXX.rsp
Circle/CMakeFiles/Circle.dir/Circle.cpp.obj: ../Circle/Circle.cpp
Circle/CMakeFiles/Circle.dir/Circle.cpp.obj: Circle/CMakeFiles/Circle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Circle/CMakeFiles/Circle.dir/Circle.cpp.obj"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Circle && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Circle/CMakeFiles/Circle.dir/Circle.cpp.obj -MF CMakeFiles\Circle.dir\Circle.cpp.obj.d -o CMakeFiles\Circle.dir\Circle.cpp.obj -c C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\Circle\Circle.cpp

Circle/CMakeFiles/Circle.dir/Circle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Circle.dir/Circle.cpp.i"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Circle && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\Circle\Circle.cpp > CMakeFiles\Circle.dir\Circle.cpp.i

Circle/CMakeFiles/Circle.dir/Circle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Circle.dir/Circle.cpp.s"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Circle && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\Circle\Circle.cpp -o CMakeFiles\Circle.dir\Circle.cpp.s

# Object files for target Circle
Circle_OBJECTS = \
"CMakeFiles/Circle.dir/Circle.cpp.obj"

# External object files for target Circle
Circle_EXTERNAL_OBJECTS =

Circle/libCircle.a: Circle/CMakeFiles/Circle.dir/Circle.cpp.obj
Circle/libCircle.a: Circle/CMakeFiles/Circle.dir/build.make
Circle/libCircle.a: Circle/CMakeFiles/Circle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libCircle.a"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Circle && $(CMAKE_COMMAND) -P CMakeFiles\Circle.dir\cmake_clean_target.cmake
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Circle && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Circle.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Circle/CMakeFiles/Circle.dir/build: Circle/libCircle.a
.PHONY : Circle/CMakeFiles/Circle.dir/build

Circle/CMakeFiles/Circle.dir/clean:
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Circle && $(CMAKE_COMMAND) -P CMakeFiles\Circle.dir\cmake_clean.cmake
.PHONY : Circle/CMakeFiles/Circle.dir/clean

Circle/CMakeFiles/Circle.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\Circle C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Circle C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Circle\CMakeFiles\Circle.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Circle/CMakeFiles/Circle.dir/depend

