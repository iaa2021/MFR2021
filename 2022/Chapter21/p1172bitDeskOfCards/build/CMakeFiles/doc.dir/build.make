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
CMAKE_SOURCE_DIR = /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/build

# Include any dependencies generated for this target.
include CMakeFiles/doc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/doc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/doc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/doc.dir/flags.make

CMakeFiles/doc.dir/DeskOfCards.cpp.o: CMakeFiles/doc.dir/flags.make
CMakeFiles/doc.dir/DeskOfCards.cpp.o: /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/DeskOfCards.cpp
CMakeFiles/doc.dir/DeskOfCards.cpp.o: CMakeFiles/doc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/doc.dir/DeskOfCards.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/doc.dir/DeskOfCards.cpp.o -MF CMakeFiles/doc.dir/DeskOfCards.cpp.o.d -o CMakeFiles/doc.dir/DeskOfCards.cpp.o -c /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/DeskOfCards.cpp

CMakeFiles/doc.dir/DeskOfCards.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/doc.dir/DeskOfCards.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/DeskOfCards.cpp > CMakeFiles/doc.dir/DeskOfCards.cpp.i

CMakeFiles/doc.dir/DeskOfCards.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/doc.dir/DeskOfCards.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/DeskOfCards.cpp -o CMakeFiles/doc.dir/DeskOfCards.cpp.s

CMakeFiles/doc.dir/doc.cpp.o: CMakeFiles/doc.dir/flags.make
CMakeFiles/doc.dir/doc.cpp.o: /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/doc.cpp
CMakeFiles/doc.dir/doc.cpp.o: CMakeFiles/doc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/doc.dir/doc.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/doc.dir/doc.cpp.o -MF CMakeFiles/doc.dir/doc.cpp.o.d -o CMakeFiles/doc.dir/doc.cpp.o -c /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/doc.cpp

CMakeFiles/doc.dir/doc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/doc.dir/doc.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/doc.cpp > CMakeFiles/doc.dir/doc.cpp.i

CMakeFiles/doc.dir/doc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/doc.dir/doc.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/doc.cpp -o CMakeFiles/doc.dir/doc.cpp.s

# Object files for target doc
doc_OBJECTS = \
"CMakeFiles/doc.dir/DeskOfCards.cpp.o" \
"CMakeFiles/doc.dir/doc.cpp.o"

# External object files for target doc
doc_EXTERNAL_OBJECTS =

doc: CMakeFiles/doc.dir/DeskOfCards.cpp.o
doc: CMakeFiles/doc.dir/doc.cpp.o
doc: CMakeFiles/doc.dir/build.make
doc: CMakeFiles/doc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable doc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/doc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/doc.dir/build: doc
.PHONY : CMakeFiles/doc.dir/build

CMakeFiles/doc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/doc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/doc.dir/clean

CMakeFiles/doc.dir/depend:
	cd /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/build /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/build /home/iaa/Desktop/gitStore/MFR2021/Chapter21/p1172bitDeskOfCards/build/CMakeFiles/doc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/doc.dir/depend
