# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /snap/clion/151/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/151/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alex4/Desktop/lang_cod/my_game

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex4/Desktop/lang_cod/my_game/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/my_game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/my_game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_game.dir/flags.make

CMakeFiles/my_game.dir/my_game_autogen/mocs_compilation.cpp.o: CMakeFiles/my_game.dir/flags.make
CMakeFiles/my_game.dir/my_game_autogen/mocs_compilation.cpp.o: my_game_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex4/Desktop/lang_cod/my_game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/my_game.dir/my_game_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_game.dir/my_game_autogen/mocs_compilation.cpp.o -c /home/alex4/Desktop/lang_cod/my_game/cmake-build-debug/my_game_autogen/mocs_compilation.cpp

CMakeFiles/my_game.dir/my_game_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_game.dir/my_game_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex4/Desktop/lang_cod/my_game/cmake-build-debug/my_game_autogen/mocs_compilation.cpp > CMakeFiles/my_game.dir/my_game_autogen/mocs_compilation.cpp.i

CMakeFiles/my_game.dir/my_game_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_game.dir/my_game_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex4/Desktop/lang_cod/my_game/cmake-build-debug/my_game_autogen/mocs_compilation.cpp -o CMakeFiles/my_game.dir/my_game_autogen/mocs_compilation.cpp.s

CMakeFiles/my_game.dir/main.cpp.o: CMakeFiles/my_game.dir/flags.make
CMakeFiles/my_game.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alex4/Desktop/lang_cod/my_game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/my_game.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_game.dir/main.cpp.o -c /home/alex4/Desktop/lang_cod/my_game/main.cpp

CMakeFiles/my_game.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_game.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alex4/Desktop/lang_cod/my_game/main.cpp > CMakeFiles/my_game.dir/main.cpp.i

CMakeFiles/my_game.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_game.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alex4/Desktop/lang_cod/my_game/main.cpp -o CMakeFiles/my_game.dir/main.cpp.s

# Object files for target my_game
my_game_OBJECTS = \
"CMakeFiles/my_game.dir/my_game_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/my_game.dir/main.cpp.o"

# External object files for target my_game
my_game_EXTERNAL_OBJECTS =

my_game: CMakeFiles/my_game.dir/my_game_autogen/mocs_compilation.cpp.o
my_game: CMakeFiles/my_game.dir/main.cpp.o
my_game: CMakeFiles/my_game.dir/build.make
my_game: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
my_game: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
my_game: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
my_game: CMakeFiles/my_game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alex4/Desktop/lang_cod/my_game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable my_game"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_game.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_game.dir/build: my_game

.PHONY : CMakeFiles/my_game.dir/build

CMakeFiles/my_game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_game.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_game.dir/clean

CMakeFiles/my_game.dir/depend:
	cd /home/alex4/Desktop/lang_cod/my_game/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex4/Desktop/lang_cod/my_game /home/alex4/Desktop/lang_cod/my_game /home/alex4/Desktop/lang_cod/my_game/cmake-build-debug /home/alex4/Desktop/lang_cod/my_game/cmake-build-debug /home/alex4/Desktop/lang_cod/my_game/cmake-build-debug/CMakeFiles/my_game.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_game.dir/depend

