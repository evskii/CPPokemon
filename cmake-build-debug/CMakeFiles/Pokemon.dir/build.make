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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\evski\Documents\TUD Games Design\Year 3\Own Projects\C++\CPPokemon"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\evski\Documents\TUD Games Design\Year 3\Own Projects\C++\CPPokemon\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Pokemon.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Pokemon.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Pokemon.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pokemon.dir/flags.make

CMakeFiles/Pokemon.dir/main.cpp.obj: CMakeFiles/Pokemon.dir/flags.make
CMakeFiles/Pokemon.dir/main.cpp.obj: ../main.cpp
CMakeFiles/Pokemon.dir/main.cpp.obj: CMakeFiles/Pokemon.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\evski\Documents\TUD Games Design\Year 3\Own Projects\C++\CPPokemon\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pokemon.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Pokemon.dir/main.cpp.obj -MF CMakeFiles\Pokemon.dir\main.cpp.obj.d -o CMakeFiles\Pokemon.dir\main.cpp.obj -c "C:\Users\evski\Documents\TUD Games Design\Year 3\Own Projects\C++\CPPokemon\main.cpp"

CMakeFiles/Pokemon.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pokemon.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\evski\Documents\TUD Games Design\Year 3\Own Projects\C++\CPPokemon\main.cpp" > CMakeFiles\Pokemon.dir\main.cpp.i

CMakeFiles/Pokemon.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pokemon.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\evski\Documents\TUD Games Design\Year 3\Own Projects\C++\CPPokemon\main.cpp" -o CMakeFiles\Pokemon.dir\main.cpp.s

# Object files for target Pokemon
Pokemon_OBJECTS = \
"CMakeFiles/Pokemon.dir/main.cpp.obj"

# External object files for target Pokemon
Pokemon_EXTERNAL_OBJECTS =

Pokemon.exe: CMakeFiles/Pokemon.dir/main.cpp.obj
Pokemon.exe: CMakeFiles/Pokemon.dir/build.make
Pokemon.exe: CMakeFiles/Pokemon.dir/linklibs.rsp
Pokemon.exe: CMakeFiles/Pokemon.dir/objects1.rsp
Pokemon.exe: CMakeFiles/Pokemon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\evski\Documents\TUD Games Design\Year 3\Own Projects\C++\CPPokemon\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Pokemon.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Pokemon.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pokemon.dir/build: Pokemon.exe
.PHONY : CMakeFiles/Pokemon.dir/build

CMakeFiles/Pokemon.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Pokemon.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Pokemon.dir/clean

CMakeFiles/Pokemon.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\evski\Documents\TUD Games Design\Year 3\Own Projects\C++\CPPokemon" "C:\Users\evski\Documents\TUD Games Design\Year 3\Own Projects\C++\CPPokemon" "C:\Users\evski\Documents\TUD Games Design\Year 3\Own Projects\C++\CPPokemon\cmake-build-debug" "C:\Users\evski\Documents\TUD Games Design\Year 3\Own Projects\C++\CPPokemon\cmake-build-debug" "C:\Users\evski\Documents\TUD Games Design\Year 3\Own Projects\C++\CPPokemon\cmake-build-debug\CMakeFiles\Pokemon.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Pokemon.dir/depend

