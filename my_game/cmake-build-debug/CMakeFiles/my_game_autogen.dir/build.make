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

# Utility rule file for my_game_autogen.

# Include the progress variables for this target.
include CMakeFiles/my_game_autogen.dir/progress.make

CMakeFiles/my_game_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/alex4/Desktop/lang_cod/my_game/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target my_game"
	/snap/clion/151/bin/cmake/linux/bin/cmake -E cmake_autogen /home/alex4/Desktop/lang_cod/my_game/cmake-build-debug/CMakeFiles/my_game_autogen.dir/AutogenInfo.json Debug

my_game_autogen: CMakeFiles/my_game_autogen
my_game_autogen: CMakeFiles/my_game_autogen.dir/build.make

.PHONY : my_game_autogen

# Rule to build all files generated by this target.
CMakeFiles/my_game_autogen.dir/build: my_game_autogen

.PHONY : CMakeFiles/my_game_autogen.dir/build

CMakeFiles/my_game_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_game_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_game_autogen.dir/clean

CMakeFiles/my_game_autogen.dir/depend:
	cd /home/alex4/Desktop/lang_cod/my_game/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex4/Desktop/lang_cod/my_game /home/alex4/Desktop/lang_cod/my_game /home/alex4/Desktop/lang_cod/my_game/cmake-build-debug /home/alex4/Desktop/lang_cod/my_game/cmake-build-debug /home/alex4/Desktop/lang_cod/my_game/cmake-build-debug/CMakeFiles/my_game_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_game_autogen.dir/depend

