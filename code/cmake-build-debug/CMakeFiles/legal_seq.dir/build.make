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
CMAKE_SOURCE_DIR = "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/legal_seq.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/legal_seq.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/legal_seq.dir/flags.make

CMakeFiles/legal_seq.dir/Ch2/legal_seq.cpp.obj: CMakeFiles/legal_seq.dir/flags.make
CMakeFiles/legal_seq.dir/Ch2/legal_seq.cpp.obj: ../Ch2/legal_seq.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/legal_seq.dir/Ch2/legal_seq.cpp.obj"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\legal_seq.dir\Ch2\legal_seq.cpp.obj -c "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\Ch2\legal_seq.cpp"

CMakeFiles/legal_seq.dir/Ch2/legal_seq.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/legal_seq.dir/Ch2/legal_seq.cpp.i"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\Ch2\legal_seq.cpp" > CMakeFiles\legal_seq.dir\Ch2\legal_seq.cpp.i

CMakeFiles/legal_seq.dir/Ch2/legal_seq.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/legal_seq.dir/Ch2/legal_seq.cpp.s"
	D:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\Ch2\legal_seq.cpp" -o CMakeFiles\legal_seq.dir\Ch2\legal_seq.cpp.s

# Object files for target legal_seq
legal_seq_OBJECTS = \
"CMakeFiles/legal_seq.dir/Ch2/legal_seq.cpp.obj"

# External object files for target legal_seq
legal_seq_EXTERNAL_OBJECTS =

legal_seq.exe: CMakeFiles/legal_seq.dir/Ch2/legal_seq.cpp.obj
legal_seq.exe: CMakeFiles/legal_seq.dir/build.make
legal_seq.exe: CMakeFiles/legal_seq.dir/linklibs.rsp
legal_seq.exe: CMakeFiles/legal_seq.dir/objects1.rsp
legal_seq.exe: CMakeFiles/legal_seq.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable legal_seq.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\legal_seq.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/legal_seq.dir/build: legal_seq.exe

.PHONY : CMakeFiles/legal_seq.dir/build

CMakeFiles/legal_seq.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\legal_seq.dir\cmake_clean.cmake
.PHONY : CMakeFiles/legal_seq.dir/clean

CMakeFiles/legal_seq.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug" "C:\Users\18113\Desktop\Uni\Junior Year\Data Frame\code\cmake-build-debug\CMakeFiles\legal_seq.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/legal_seq.dir/depend

