# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\KIIT\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.5728.100\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\KIIT\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.5728.100\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Rahul Code\C Git\c_sample"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Rahul Code\C Git\c_sample\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/c_sample.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c_sample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c_sample.dir/flags.make

CMakeFiles/c_sample.dir/s&s/cross.c.obj: CMakeFiles/c_sample.dir/flags.make
CMakeFiles/c_sample.dir/s&s/cross.c.obj: ../s&s/cross.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Rahul Code\C Git\c_sample\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c_sample.dir/s&s/cross.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o "CMakeFiles\c_sample.dir\s&s\cross.c.obj"   -c "D:\Rahul Code\C Git\c_sample\s&s\cross.c"

CMakeFiles/c_sample.dir/s&s/cross.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c_sample.dir/s&s/cross.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Rahul Code\C Git\c_sample\s&s\cross.c" > "CMakeFiles\c_sample.dir\s&s\cross.c.i"

CMakeFiles/c_sample.dir/s&s/cross.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c_sample.dir/s&s/cross.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Rahul Code\C Git\c_sample\s&s\cross.c" -o "CMakeFiles\c_sample.dir\s&s\cross.c.s"

# Object files for target c_sample
c_sample_OBJECTS = \
"CMakeFiles/c_sample.dir/s&s/cross.c.obj"

# External object files for target c_sample
c_sample_EXTERNAL_OBJECTS =

c_sample.exe: CMakeFiles/c_sample.dir/s&s/cross.c.obj
c_sample.exe: CMakeFiles/c_sample.dir/build.make
c_sample.exe: CMakeFiles/c_sample.dir/linklibs.rsp
c_sample.exe: CMakeFiles/c_sample.dir/objects1.rsp
c_sample.exe: CMakeFiles/c_sample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Rahul Code\C Git\c_sample\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c_sample.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\c_sample.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c_sample.dir/build: c_sample.exe

.PHONY : CMakeFiles/c_sample.dir/build

CMakeFiles/c_sample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\c_sample.dir\cmake_clean.cmake
.PHONY : CMakeFiles/c_sample.dir/clean

CMakeFiles/c_sample.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Rahul Code\C Git\c_sample" "D:\Rahul Code\C Git\c_sample" "D:\Rahul Code\C Git\c_sample\cmake-build-debug" "D:\Rahul Code\C Git\c_sample\cmake-build-debug" "D:\Rahul Code\C Git\c_sample\cmake-build-debug\CMakeFiles\c_sample.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/c_sample.dir/depend

