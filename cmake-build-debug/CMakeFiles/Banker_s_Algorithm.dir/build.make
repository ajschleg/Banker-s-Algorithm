# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Banker_s_Algorithm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Banker_s_Algorithm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Banker_s_Algorithm.dir/flags.make

CMakeFiles/Banker_s_Algorithm.dir/main.c.o: CMakeFiles/Banker_s_Algorithm.dir/flags.make
CMakeFiles/Banker_s_Algorithm.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Banker_s_Algorithm.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Banker_s_Algorithm.dir/main.c.o   -c /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/main.c

CMakeFiles/Banker_s_Algorithm.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Banker_s_Algorithm.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/main.c > CMakeFiles/Banker_s_Algorithm.dir/main.c.i

CMakeFiles/Banker_s_Algorithm.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Banker_s_Algorithm.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/main.c -o CMakeFiles/Banker_s_Algorithm.dir/main.c.s

CMakeFiles/Banker_s_Algorithm.dir/relResources.c.o: CMakeFiles/Banker_s_Algorithm.dir/flags.make
CMakeFiles/Banker_s_Algorithm.dir/relResources.c.o: ../relResources.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Banker_s_Algorithm.dir/relResources.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Banker_s_Algorithm.dir/relResources.c.o   -c /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/relResources.c

CMakeFiles/Banker_s_Algorithm.dir/relResources.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Banker_s_Algorithm.dir/relResources.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/relResources.c > CMakeFiles/Banker_s_Algorithm.dir/relResources.c.i

CMakeFiles/Banker_s_Algorithm.dir/relResources.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Banker_s_Algorithm.dir/relResources.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/relResources.c -o CMakeFiles/Banker_s_Algorithm.dir/relResources.c.s

CMakeFiles/Banker_s_Algorithm.dir/reqResources.c.o: CMakeFiles/Banker_s_Algorithm.dir/flags.make
CMakeFiles/Banker_s_Algorithm.dir/reqResources.c.o: ../reqResources.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Banker_s_Algorithm.dir/reqResources.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Banker_s_Algorithm.dir/reqResources.c.o   -c /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/reqResources.c

CMakeFiles/Banker_s_Algorithm.dir/reqResources.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Banker_s_Algorithm.dir/reqResources.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/reqResources.c > CMakeFiles/Banker_s_Algorithm.dir/reqResources.c.i

CMakeFiles/Banker_s_Algorithm.dir/reqResources.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Banker_s_Algorithm.dir/reqResources.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/reqResources.c -o CMakeFiles/Banker_s_Algorithm.dir/reqResources.c.s

CMakeFiles/Banker_s_Algorithm.dir/threadRunner.c.o: CMakeFiles/Banker_s_Algorithm.dir/flags.make
CMakeFiles/Banker_s_Algorithm.dir/threadRunner.c.o: ../threadRunner.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Banker_s_Algorithm.dir/threadRunner.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Banker_s_Algorithm.dir/threadRunner.c.o   -c /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/threadRunner.c

CMakeFiles/Banker_s_Algorithm.dir/threadRunner.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Banker_s_Algorithm.dir/threadRunner.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/threadRunner.c > CMakeFiles/Banker_s_Algorithm.dir/threadRunner.c.i

CMakeFiles/Banker_s_Algorithm.dir/threadRunner.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Banker_s_Algorithm.dir/threadRunner.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/threadRunner.c -o CMakeFiles/Banker_s_Algorithm.dir/threadRunner.c.s

CMakeFiles/Banker_s_Algorithm.dir/printFunctions.c.o: CMakeFiles/Banker_s_Algorithm.dir/flags.make
CMakeFiles/Banker_s_Algorithm.dir/printFunctions.c.o: ../printFunctions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Banker_s_Algorithm.dir/printFunctions.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Banker_s_Algorithm.dir/printFunctions.c.o   -c /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/printFunctions.c

CMakeFiles/Banker_s_Algorithm.dir/printFunctions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Banker_s_Algorithm.dir/printFunctions.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/printFunctions.c > CMakeFiles/Banker_s_Algorithm.dir/printFunctions.c.i

CMakeFiles/Banker_s_Algorithm.dir/printFunctions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Banker_s_Algorithm.dir/printFunctions.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/printFunctions.c -o CMakeFiles/Banker_s_Algorithm.dir/printFunctions.c.s

# Object files for target Banker_s_Algorithm
Banker_s_Algorithm_OBJECTS = \
"CMakeFiles/Banker_s_Algorithm.dir/main.c.o" \
"CMakeFiles/Banker_s_Algorithm.dir/relResources.c.o" \
"CMakeFiles/Banker_s_Algorithm.dir/reqResources.c.o" \
"CMakeFiles/Banker_s_Algorithm.dir/threadRunner.c.o" \
"CMakeFiles/Banker_s_Algorithm.dir/printFunctions.c.o"

# External object files for target Banker_s_Algorithm
Banker_s_Algorithm_EXTERNAL_OBJECTS =

Banker_s_Algorithm: CMakeFiles/Banker_s_Algorithm.dir/main.c.o
Banker_s_Algorithm: CMakeFiles/Banker_s_Algorithm.dir/relResources.c.o
Banker_s_Algorithm: CMakeFiles/Banker_s_Algorithm.dir/reqResources.c.o
Banker_s_Algorithm: CMakeFiles/Banker_s_Algorithm.dir/threadRunner.c.o
Banker_s_Algorithm: CMakeFiles/Banker_s_Algorithm.dir/printFunctions.c.o
Banker_s_Algorithm: CMakeFiles/Banker_s_Algorithm.dir/build.make
Banker_s_Algorithm: CMakeFiles/Banker_s_Algorithm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable Banker_s_Algorithm"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Banker_s_Algorithm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Banker_s_Algorithm.dir/build: Banker_s_Algorithm

.PHONY : CMakeFiles/Banker_s_Algorithm.dir/build

CMakeFiles/Banker_s_Algorithm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Banker_s_Algorithm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Banker_s_Algorithm.dir/clean

CMakeFiles/Banker_s_Algorithm.dir/depend:
	cd /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/cmake-build-debug /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/cmake-build-debug /Users/austinschlegel/School/ECE408_OS/Banker-s-Algorithm/cmake-build-debug/CMakeFiles/Banker_s_Algorithm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Banker_s_Algorithm.dir/depend

