# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = C:\CppDistro\cmake\bin\cmake.exe

# The command to remove a file.
RM = C:\CppDistro\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\IPS 2022\Project_activity\sfml.1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\IPS 2022\Project_activity\sfml.1"

# Include any dependencies generated for this target.
include 03/CMakeFiles/03.dir/depend.make

# Include the progress variables for this target.
include 03/CMakeFiles/03.dir/progress.make

# Include the compile flags for this target's objects.
include 03/CMakeFiles/03.dir/flags.make

03/CMakeFiles/03.dir/main.cpp.obj: 03/CMakeFiles/03.dir/flags.make
03/CMakeFiles/03.dir/main.cpp.obj: 03/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\IPS 2022\Project_activity\sfml.1\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object 03/CMakeFiles/03.dir/main.cpp.obj"
	cd /d C:\IPS202~1\PROJEC~1\sfml.1\03 && C:\CppDistro\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\03.dir\main.cpp.obj -c "C:\IPS 2022\Project_activity\sfml.1\03\main.cpp"

03/CMakeFiles/03.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/03.dir/main.cpp.i"
	cd /d C:\IPS202~1\PROJEC~1\sfml.1\03 && C:\CppDistro\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\IPS 2022\Project_activity\sfml.1\03\main.cpp" > CMakeFiles\03.dir\main.cpp.i

03/CMakeFiles/03.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/03.dir/main.cpp.s"
	cd /d C:\IPS202~1\PROJEC~1\sfml.1\03 && C:\CppDistro\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\IPS 2022\Project_activity\sfml.1\03\main.cpp" -o CMakeFiles\03.dir\main.cpp.s

03/CMakeFiles/03.dir/main.cpp.obj.requires:

.PHONY : 03/CMakeFiles/03.dir/main.cpp.obj.requires

03/CMakeFiles/03.dir/main.cpp.obj.provides: 03/CMakeFiles/03.dir/main.cpp.obj.requires
	$(MAKE) -f 03\CMakeFiles\03.dir\build.make 03/CMakeFiles/03.dir/main.cpp.obj.provides.build
.PHONY : 03/CMakeFiles/03.dir/main.cpp.obj.provides

03/CMakeFiles/03.dir/main.cpp.obj.provides.build: 03/CMakeFiles/03.dir/main.cpp.obj


# Object files for target 03
03_OBJECTS = \
"CMakeFiles/03.dir/main.cpp.obj"

# External object files for target 03
03_EXTERNAL_OBJECTS =

03/03.exe: 03/CMakeFiles/03.dir/main.cpp.obj
03/03.exe: 03/CMakeFiles/03.dir/build.make
03/03.exe: C:/CppDistro/MinGW/lib/libsfml-window-s.a
03/03.exe: C:/CppDistro/MinGW/lib/libsfml-graphics-s.a
03/03.exe: C:/CppDistro/MinGW/lib/libsfml-system-s.a
03/03.exe: C:/CppDistro/MinGW/lib/libfreetype.a
03/03.exe: C:/CppDistro/MinGW/lib/libjpeg.a
03/03.exe: 03/CMakeFiles/03.dir/linklibs.rsp
03/03.exe: 03/CMakeFiles/03.dir/objects1.rsp
03/03.exe: 03/CMakeFiles/03.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\IPS 2022\Project_activity\sfml.1\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 03.exe"
	cd /d C:\IPS202~1\PROJEC~1\sfml.1\03 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\03.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
03/CMakeFiles/03.dir/build: 03/03.exe

.PHONY : 03/CMakeFiles/03.dir/build

03/CMakeFiles/03.dir/requires: 03/CMakeFiles/03.dir/main.cpp.obj.requires

.PHONY : 03/CMakeFiles/03.dir/requires

03/CMakeFiles/03.dir/clean:
	cd /d C:\IPS202~1\PROJEC~1\sfml.1\03 && $(CMAKE_COMMAND) -P CMakeFiles\03.dir\cmake_clean.cmake
.PHONY : 03/CMakeFiles/03.dir/clean

03/CMakeFiles/03.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\IPS 2022\Project_activity\sfml.1" "C:\IPS 2022\Project_activity\sfml.1\03" "C:\IPS 2022\Project_activity\sfml.1" "C:\IPS 2022\Project_activity\sfml.1\03" "C:\IPS 2022\Project_activity\sfml.1\03\CMakeFiles\03.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : 03/CMakeFiles/03.dir/depend

