# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = C:\Users\18113\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\213.5744.254\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\18113\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\213.5744.254\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/BFS_Matrix.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/BFS_Matrix.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BFS_Matrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BFS_Matrix.dir/flags.make

CMakeFiles/BFS_Matrix.dir/Ch3/BFS_Matrix.cpp.obj: CMakeFiles/BFS_Matrix.dir/flags.make
CMakeFiles/BFS_Matrix.dir/Ch3/BFS_Matrix.cpp.obj: ../Ch3/BFS_Matrix.cpp
CMakeFiles/BFS_Matrix.dir/Ch3/BFS_Matrix.cpp.obj: CMakeFiles/BFS_Matrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BFS_Matrix.dir/Ch3/BFS_Matrix.cpp.obj"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BFS_Matrix.dir/Ch3/BFS_Matrix.cpp.obj -MF CMakeFiles\BFS_Matrix.dir\Ch3\BFS_Matrix.cpp.obj.d -o CMakeFiles\BFS_Matrix.dir\Ch3\BFS_Matrix.cpp.obj -c "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\Ch3\BFS_Matrix.cpp"

CMakeFiles/BFS_Matrix.dir/Ch3/BFS_Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BFS_Matrix.dir/Ch3/BFS_Matrix.cpp.i"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\Ch3\BFS_Matrix.cpp" > CMakeFiles\BFS_Matrix.dir\Ch3\BFS_Matrix.cpp.i

CMakeFiles/BFS_Matrix.dir/Ch3/BFS_Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BFS_Matrix.dir/Ch3/BFS_Matrix.cpp.s"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\Ch3\BFS_Matrix.cpp" -o CMakeFiles\BFS_Matrix.dir\Ch3\BFS_Matrix.cpp.s

# Object files for target BFS_Matrix
BFS_Matrix_OBJECTS = \
"CMakeFiles/BFS_Matrix.dir/Ch3/BFS_Matrix.cpp.obj"

# External object files for target BFS_Matrix
BFS_Matrix_EXTERNAL_OBJECTS =

BFS_Matrix.exe: CMakeFiles/BFS_Matrix.dir/Ch3/BFS_Matrix.cpp.obj
BFS_Matrix.exe: CMakeFiles/BFS_Matrix.dir/build.make
BFS_Matrix.exe: CMakeFiles/BFS_Matrix.dir/linklibs.rsp
BFS_Matrix.exe: CMakeFiles/BFS_Matrix.dir/objects1.rsp
BFS_Matrix.exe: CMakeFiles/BFS_Matrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BFS_Matrix.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BFS_Matrix.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BFS_Matrix.dir/build: BFS_Matrix.exe
.PHONY : CMakeFiles/BFS_Matrix.dir/build

CMakeFiles/BFS_Matrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BFS_Matrix.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BFS_Matrix.dir/clean

CMakeFiles/BFS_Matrix.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug\CMakeFiles\BFS_Matrix.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/BFS_Matrix.dir/depend

