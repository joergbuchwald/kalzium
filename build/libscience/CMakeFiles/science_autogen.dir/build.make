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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/joerg/github/kalzium

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joerg/github/kalzium/build

# Utility rule file for science_autogen.

# Include the progress variables for this target.
include libscience/CMakeFiles/science_autogen.dir/progress.make

libscience/CMakeFiles/science_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/joerg/github/kalzium/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target science"
	cd /home/joerg/github/kalzium/build/libscience && /usr/bin/cmake -E cmake_autogen /home/joerg/github/kalzium/build/libscience/CMakeFiles/science_autogen.dir/AutogenInfo.cmake ""

science_autogen: libscience/CMakeFiles/science_autogen
science_autogen: libscience/CMakeFiles/science_autogen.dir/build.make

.PHONY : science_autogen

# Rule to build all files generated by this target.
libscience/CMakeFiles/science_autogen.dir/build: science_autogen

.PHONY : libscience/CMakeFiles/science_autogen.dir/build

libscience/CMakeFiles/science_autogen.dir/clean:
	cd /home/joerg/github/kalzium/build/libscience && $(CMAKE_COMMAND) -P CMakeFiles/science_autogen.dir/cmake_clean.cmake
.PHONY : libscience/CMakeFiles/science_autogen.dir/clean

libscience/CMakeFiles/science_autogen.dir/depend:
	cd /home/joerg/github/kalzium/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joerg/github/kalzium /home/joerg/github/kalzium/libscience /home/joerg/github/kalzium/build /home/joerg/github/kalzium/build/libscience /home/joerg/github/kalzium/build/libscience/CMakeFiles/science_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libscience/CMakeFiles/science_autogen.dir/depend

