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

# Include any dependencies generated for this target.
include libscience/tests/CMakeFiles/isotopeparsertest.dir/depend.make

# Include the progress variables for this target.
include libscience/tests/CMakeFiles/isotopeparsertest.dir/progress.make

# Include the compile flags for this target's objects.
include libscience/tests/CMakeFiles/isotopeparsertest.dir/flags.make

libscience/tests/CMakeFiles/isotopeparsertest.dir/isotopereadingtest.cpp.o: libscience/tests/CMakeFiles/isotopeparsertest.dir/flags.make
libscience/tests/CMakeFiles/isotopeparsertest.dir/isotopereadingtest.cpp.o: ../libscience/tests/isotopereadingtest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joerg/github/kalzium/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libscience/tests/CMakeFiles/isotopeparsertest.dir/isotopereadingtest.cpp.o"
	cd /home/joerg/github/kalzium/build/libscience/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/isotopeparsertest.dir/isotopereadingtest.cpp.o -c /home/joerg/github/kalzium/libscience/tests/isotopereadingtest.cpp

libscience/tests/CMakeFiles/isotopeparsertest.dir/isotopereadingtest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/isotopeparsertest.dir/isotopereadingtest.cpp.i"
	cd /home/joerg/github/kalzium/build/libscience/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joerg/github/kalzium/libscience/tests/isotopereadingtest.cpp > CMakeFiles/isotopeparsertest.dir/isotopereadingtest.cpp.i

libscience/tests/CMakeFiles/isotopeparsertest.dir/isotopereadingtest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/isotopeparsertest.dir/isotopereadingtest.cpp.s"
	cd /home/joerg/github/kalzium/build/libscience/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joerg/github/kalzium/libscience/tests/isotopereadingtest.cpp -o CMakeFiles/isotopeparsertest.dir/isotopereadingtest.cpp.s

libscience/tests/CMakeFiles/isotopeparsertest.dir/isotopeparsertest_autogen/mocs_compilation.cpp.o: libscience/tests/CMakeFiles/isotopeparsertest.dir/flags.make
libscience/tests/CMakeFiles/isotopeparsertest.dir/isotopeparsertest_autogen/mocs_compilation.cpp.o: libscience/tests/isotopeparsertest_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joerg/github/kalzium/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libscience/tests/CMakeFiles/isotopeparsertest.dir/isotopeparsertest_autogen/mocs_compilation.cpp.o"
	cd /home/joerg/github/kalzium/build/libscience/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/isotopeparsertest.dir/isotopeparsertest_autogen/mocs_compilation.cpp.o -c /home/joerg/github/kalzium/build/libscience/tests/isotopeparsertest_autogen/mocs_compilation.cpp

libscience/tests/CMakeFiles/isotopeparsertest.dir/isotopeparsertest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/isotopeparsertest.dir/isotopeparsertest_autogen/mocs_compilation.cpp.i"
	cd /home/joerg/github/kalzium/build/libscience/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joerg/github/kalzium/build/libscience/tests/isotopeparsertest_autogen/mocs_compilation.cpp > CMakeFiles/isotopeparsertest.dir/isotopeparsertest_autogen/mocs_compilation.cpp.i

libscience/tests/CMakeFiles/isotopeparsertest.dir/isotopeparsertest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/isotopeparsertest.dir/isotopeparsertest_autogen/mocs_compilation.cpp.s"
	cd /home/joerg/github/kalzium/build/libscience/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joerg/github/kalzium/build/libscience/tests/isotopeparsertest_autogen/mocs_compilation.cpp -o CMakeFiles/isotopeparsertest.dir/isotopeparsertest_autogen/mocs_compilation.cpp.s

# Object files for target isotopeparsertest
isotopeparsertest_OBJECTS = \
"CMakeFiles/isotopeparsertest.dir/isotopereadingtest.cpp.o" \
"CMakeFiles/isotopeparsertest.dir/isotopeparsertest_autogen/mocs_compilation.cpp.o"

# External object files for target isotopeparsertest
isotopeparsertest_EXTERNAL_OBJECTS =

bin/isotopeparsertest: libscience/tests/CMakeFiles/isotopeparsertest.dir/isotopereadingtest.cpp.o
bin/isotopeparsertest: libscience/tests/CMakeFiles/isotopeparsertest.dir/isotopeparsertest_autogen/mocs_compilation.cpp.o
bin/isotopeparsertest: libscience/tests/CMakeFiles/isotopeparsertest.dir/build.make
bin/isotopeparsertest: libscience/tests/CMakeFiles/isotopeparsertest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/joerg/github/kalzium/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/isotopeparsertest"
	cd /home/joerg/github/kalzium/build/libscience/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/isotopeparsertest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libscience/tests/CMakeFiles/isotopeparsertest.dir/build: bin/isotopeparsertest

.PHONY : libscience/tests/CMakeFiles/isotopeparsertest.dir/build

libscience/tests/CMakeFiles/isotopeparsertest.dir/clean:
	cd /home/joerg/github/kalzium/build/libscience/tests && $(CMAKE_COMMAND) -P CMakeFiles/isotopeparsertest.dir/cmake_clean.cmake
.PHONY : libscience/tests/CMakeFiles/isotopeparsertest.dir/clean

libscience/tests/CMakeFiles/isotopeparsertest.dir/depend:
	cd /home/joerg/github/kalzium/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joerg/github/kalzium /home/joerg/github/kalzium/libscience/tests /home/joerg/github/kalzium/build /home/joerg/github/kalzium/build/libscience/tests /home/joerg/github/kalzium/build/libscience/tests/CMakeFiles/isotopeparsertest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libscience/tests/CMakeFiles/isotopeparsertest.dir/depend

