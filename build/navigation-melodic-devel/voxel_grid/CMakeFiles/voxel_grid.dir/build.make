# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/zeljko/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zeljko/catkin_ws/build

# Include any dependencies generated for this target.
include navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/depend.make

# Include the progress variables for this target.
include navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/progress.make

# Include the compile flags for this target's objects.
include navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/flags.make

navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o: navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/flags.make
navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o: /home/zeljko/catkin_ws/src/navigation-melodic-devel/voxel_grid/src/voxel_grid.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zeljko/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o"
	cd /home/zeljko/catkin_ws/build/navigation-melodic-devel/voxel_grid && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o -c /home/zeljko/catkin_ws/src/navigation-melodic-devel/voxel_grid/src/voxel_grid.cpp

navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.i"
	cd /home/zeljko/catkin_ws/build/navigation-melodic-devel/voxel_grid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zeljko/catkin_ws/src/navigation-melodic-devel/voxel_grid/src/voxel_grid.cpp > CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.i

navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.s"
	cd /home/zeljko/catkin_ws/build/navigation-melodic-devel/voxel_grid && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zeljko/catkin_ws/src/navigation-melodic-devel/voxel_grid/src/voxel_grid.cpp -o CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.s

navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o.requires:

.PHONY : navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o.requires

navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o.provides: navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o.requires
	$(MAKE) -f navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/build.make navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o.provides.build
.PHONY : navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o.provides

navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o.provides.build: navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o


# Object files for target voxel_grid
voxel_grid_OBJECTS = \
"CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o"

# External object files for target voxel_grid
voxel_grid_EXTERNAL_OBJECTS =

/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/build.make
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /opt/ros/melodic/lib/libroscpp.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /opt/ros/melodic/lib/librosconsole.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /opt/ros/melodic/lib/librostime.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /opt/ros/melodic/lib/libcpp_common.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so: navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zeljko/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so"
	cd /home/zeljko/catkin_ws/build/navigation-melodic-devel/voxel_grid && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/voxel_grid.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/build: /home/zeljko/catkin_ws/devel/lib/libvoxel_grid.so

.PHONY : navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/build

navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/requires: navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/src/voxel_grid.cpp.o.requires

.PHONY : navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/requires

navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/clean:
	cd /home/zeljko/catkin_ws/build/navigation-melodic-devel/voxel_grid && $(CMAKE_COMMAND) -P CMakeFiles/voxel_grid.dir/cmake_clean.cmake
.PHONY : navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/clean

navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/depend:
	cd /home/zeljko/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zeljko/catkin_ws/src /home/zeljko/catkin_ws/src/navigation-melodic-devel/voxel_grid /home/zeljko/catkin_ws/build /home/zeljko/catkin_ws/build/navigation-melodic-devel/voxel_grid /home/zeljko/catkin_ws/build/navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : navigation-melodic-devel/voxel_grid/CMakeFiles/voxel_grid.dir/depend

