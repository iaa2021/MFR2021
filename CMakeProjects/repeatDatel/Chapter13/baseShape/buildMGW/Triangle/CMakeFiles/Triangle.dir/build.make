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
include Triangle/CMakeFiles/Triangle.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Triangle/CMakeFiles/Triangle.dir/compiler_depend.make

# Include the progress variables for this target.
include Triangle/CMakeFiles/Triangle.dir/progress.make

# Include the compile flags for this target's objects.
include Triangle/CMakeFiles/Triangle.dir/flags.make

Triangle/CMakeFiles/Triangle.dir/Triangle.cpp.obj: Triangle/CMakeFiles/Triangle.dir/flags.make
Triangle/CMakeFiles/Triangle.dir/Triangle.cpp.obj: Triangle/CMakeFiles/Triangle.dir/includes_CXX.rsp
Triangle/CMakeFiles/Triangle.dir/Triangle.cpp.obj: ../Triangle/Triangle.cpp
Triangle/CMakeFiles/Triangle.dir/Triangle.cpp.obj: Triangle/CMakeFiles/Triangle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Triangle/CMakeFiles/Triangle.dir/Triangle.cpp.obj"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Triangle && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Triangle/CMakeFiles/Triangle.dir/Triangle.cpp.obj -MF CMakeFiles\Triangle.dir\Triangle.cpp.obj.d -o CMakeFiles\Triangle.dir\Triangle.cpp.obj -c C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\Triangle\Triangle.cpp

Triangle/CMakeFiles/Triangle.dir/Triangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Triangle.dir/Triangle.cpp.i"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Triangle && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\Triangle\Triangle.cpp > CMakeFiles\Triangle.dir\Triangle.cpp.i

Triangle/CMakeFiles/Triangle.dir/Triangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Triangle.dir/Triangle.cpp.s"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Triangle && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\Triangle\Triangle.cpp -o CMakeFiles\Triangle.dir\Triangle.cpp.s

# Object files for target Triangle
Triangle_OBJECTS = \
"CMakeFiles/Triangle.dir/Triangle.cpp.obj"

# External object files for target Triangle
Triangle_EXTERNAL_OBJECTS =

Triangle/libTriangle.a: Triangle/CMakeFiles/Triangle.dir/Triangle.cpp.obj
Triangle/libTriangle.a: Triangle/CMakeFiles/Triangle.dir/build.make
Triangle/libTriangle.a: Triangle/CMakeFiles/Triangle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libTriangle.a"
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Triangle && $(CMAKE_COMMAND) -P CMakeFiles\Triangle.dir\cmake_clean_target.cmake
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Triangle && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Triangle.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Triangle/CMakeFiles/Triangle.dir/build: Triangle/libTriangle.a
.PHONY : Triangle/CMakeFiles/Triangle.dir/build

Triangle/CMakeFiles/Triangle.dir/clean:
	cd /d C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Triangle && $(CMAKE_COMMAND) -P CMakeFiles\Triangle.dir\cmake_clean.cmake
.PHONY : Triangle/CMakeFiles/Triangle.dir/clean

Triangle/CMakeFiles/Triangle.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\Triangle C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Triangle C:\Users\ivano\Desktop\gitWatch\CMakeProjects\repeatDatel\Chapter13\baseShape\buildMGW\Triangle\CMakeFiles\Triangle.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Triangle/CMakeFiles/Triangle.dir/depend
