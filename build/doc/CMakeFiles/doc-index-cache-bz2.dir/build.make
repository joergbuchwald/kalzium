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

# Utility rule file for doc-index-cache-bz2.

# Include the progress variables for this target.
include doc/CMakeFiles/doc-index-cache-bz2.dir/progress.make

doc/CMakeFiles/doc-index-cache-bz2: doc/index.cache.bz2


doc/index.cache.bz2: ../doc/index.docbook
doc/index.cache.bz2: /usr/share/kf5/kdoctools/customization/kde-chunk.xsl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/joerg/github/kalzium/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating index.cache.bz2"
	cd /home/joerg/github/kalzium/doc && /usr/bin/meinproc5 --check --cache /home/joerg/github/kalzium/build/doc//index.cache.bz2 index.docbook

doc-index-cache-bz2: doc/CMakeFiles/doc-index-cache-bz2
doc-index-cache-bz2: doc/index.cache.bz2
doc-index-cache-bz2: doc/CMakeFiles/doc-index-cache-bz2.dir/build.make

.PHONY : doc-index-cache-bz2

# Rule to build all files generated by this target.
doc/CMakeFiles/doc-index-cache-bz2.dir/build: doc-index-cache-bz2

.PHONY : doc/CMakeFiles/doc-index-cache-bz2.dir/build

doc/CMakeFiles/doc-index-cache-bz2.dir/clean:
	cd /home/joerg/github/kalzium/build/doc && $(CMAKE_COMMAND) -P CMakeFiles/doc-index-cache-bz2.dir/cmake_clean.cmake
.PHONY : doc/CMakeFiles/doc-index-cache-bz2.dir/clean

doc/CMakeFiles/doc-index-cache-bz2.dir/depend:
	cd /home/joerg/github/kalzium/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joerg/github/kalzium /home/joerg/github/kalzium/doc /home/joerg/github/kalzium/build /home/joerg/github/kalzium/build/doc /home/joerg/github/kalzium/build/doc/CMakeFiles/doc-index-cache-bz2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : doc/CMakeFiles/doc-index-cache-bz2.dir/depend

