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
include CMakeFiles/init_list.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/init_list.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/init_list.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/init_list.dir/flags.make

CMakeFiles/init_list.dir/Ch0/init_list.cpp.obj: CMakeFiles/init_list.dir/flags.make
CMakeFiles/init_list.dir/Ch0/init_list.cpp.obj: ../Ch0/init_list.cpp
CMakeFiles/init_list.dir/Ch0/init_list.cpp.obj: CMakeFiles/init_list.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/init_list.dir/Ch0/init_list.cpp.obj"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/init_list.dir/Ch0/init_list.cpp.obj -MF CMakeFiles\init_list.dir\Ch0\init_list.cpp.obj.d -o CMakeFiles\init_list.dir\Ch0\init_list.cpp.obj -c "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\Ch0\init_list.cpp"

CMakeFiles/init_list.dir/Ch0/init_list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/init_list.dir/Ch0/init_list.cpp.i"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\Ch0\init_list.cpp" > CMakeFiles\init_list.dir\Ch0\init_list.cpp.i

CMakeFiles/init_list.dir/Ch0/init_list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/init_list.dir/Ch0/init_list.cpp.s"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\Ch0\init_list.cpp" -o CMakeFiles\init_list.dir\Ch0\init_list.cpp.s

# Object files for target init_list
init_list_OBJECTS = \
"CMakeFiles/init_list.dir/Ch0/init_list.cpp.obj"

# External object files for target init_list
init_list_EXTERNAL_OBJECTS =

init_list.exe: CMakeFiles/init_list.dir/Ch0/init_list.cpp.obj
init_list.exe: CMakeFiles/init_list.dir/build.make
init_list.exe: CMakeFiles/init_list.dir/linklibs.rsp
init_list.exe: CMakeFiles/init_list.dir/objects1.rsp
init_list.exe: CMakeFiles/init_list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable init_list.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\init_list.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/init_list.dir/build: init_list.exe
.PHONY : CMakeFiles/init_list.dir/build

CMakeFiles/init_list.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\init_list.dir\cmake_clean.cmake
.PHONY : CMakeFiles/init_list.dir/clean

CMakeFiles/init_list.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug\CMakeFiles\init_list.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/init_list.dir/depend

