# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = C:\Users\18113\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7628.27\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\18113\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\211.7628.27\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\18113\Desktop\Junior Year\Data Frame\code"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\18113\Desktop\Junior Year\Data Frame\code\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/object_as_function_parameters.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/object_as_function_parameters.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/object_as_function_parameters.dir/flags.make

CMakeFiles/object_as_function_parameters.dir/Ch0/object_as_function_parameters.cpp.obj: CMakeFiles/object_as_function_parameters.dir/flags.make
CMakeFiles/object_as_function_parameters.dir/Ch0/object_as_function_parameters.cpp.obj: ../Ch0/object_as_function_parameters.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\18113\Desktop\Junior Year\Data Frame\code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/object_as_function_parameters.dir/Ch0/object_as_function_parameters.cpp.obj"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\object_as_function_parameters.dir\Ch0\object_as_function_parameters.cpp.obj -c "C:\Users\18113\Desktop\Junior Year\Data Frame\code\Ch0\object_as_function_parameters.cpp"

CMakeFiles/object_as_function_parameters.dir/Ch0/object_as_function_parameters.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/object_as_function_parameters.dir/Ch0/object_as_function_parameters.cpp.i"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\18113\Desktop\Junior Year\Data Frame\code\Ch0\object_as_function_parameters.cpp" > CMakeFiles\object_as_function_parameters.dir\Ch0\object_as_function_parameters.cpp.i

CMakeFiles/object_as_function_parameters.dir/Ch0/object_as_function_parameters.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/object_as_function_parameters.dir/Ch0/object_as_function_parameters.cpp.s"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\18113\Desktop\Junior Year\Data Frame\code\Ch0\object_as_function_parameters.cpp" -o CMakeFiles\object_as_function_parameters.dir\Ch0\object_as_function_parameters.cpp.s

# Object files for target object_as_function_parameters
object_as_function_parameters_OBJECTS = \
"CMakeFiles/object_as_function_parameters.dir/Ch0/object_as_function_parameters.cpp.obj"

# External object files for target object_as_function_parameters
object_as_function_parameters_EXTERNAL_OBJECTS =

object_as_function_parameters.exe: CMakeFiles/object_as_function_parameters.dir/Ch0/object_as_function_parameters.cpp.obj
object_as_function_parameters.exe: CMakeFiles/object_as_function_parameters.dir/build.make
object_as_function_parameters.exe: CMakeFiles/object_as_function_parameters.dir/linklibs.rsp
object_as_function_parameters.exe: CMakeFiles/object_as_function_parameters.dir/objects1.rsp
object_as_function_parameters.exe: CMakeFiles/object_as_function_parameters.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\18113\Desktop\Junior Year\Data Frame\code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable object_as_function_parameters.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\object_as_function_parameters.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/object_as_function_parameters.dir/build: object_as_function_parameters.exe

.PHONY : CMakeFiles/object_as_function_parameters.dir/build

CMakeFiles/object_as_function_parameters.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\object_as_function_parameters.dir\cmake_clean.cmake
.PHONY : CMakeFiles/object_as_function_parameters.dir/clean

CMakeFiles/object_as_function_parameters.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\18113\Desktop\Junior Year\Data Frame\code" "C:\Users\18113\Desktop\Junior Year\Data Frame\code" "C:\Users\18113\Desktop\Junior Year\Data Frame\code\cmake-build-debug" "C:\Users\18113\Desktop\Junior Year\Data Frame\code\cmake-build-debug" "C:\Users\18113\Desktop\Junior Year\Data Frame\code\cmake-build-debug\CMakeFiles\object_as_function_parameters.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/object_as_function_parameters.dir/depend
