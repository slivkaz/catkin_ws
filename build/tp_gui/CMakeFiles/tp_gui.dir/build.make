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
include tp_gui/CMakeFiles/tp_gui.dir/depend.make

# Include the progress variables for this target.
include tp_gui/CMakeFiles/tp_gui.dir/progress.make

# Include the compile flags for this target's objects.
include tp_gui/CMakeFiles/tp_gui.dir/flags.make

tp_gui/qrc_images.cxx: /home/zeljko/catkin_ws/src/tp_gui/resources/images/icon.png
tp_gui/qrc_images.cxx: tp_gui/resources/images.qrc.depends
tp_gui/qrc_images.cxx: /home/zeljko/catkin_ws/src/tp_gui/resources/images.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/zeljko/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_images.cxx"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/lib/x86_64-linux-gnu/qt4/bin/rcc -name images -o /home/zeljko/catkin_ws/build/tp_gui/qrc_images.cxx /home/zeljko/catkin_ws/src/tp_gui/resources/images.qrc

tp_gui/ui_main_window.h: /home/zeljko/catkin_ws/src/tp_gui/ui/main_window.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/zeljko/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_main_window.h"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/lib/x86_64-linux-gnu/qt4/bin/uic -o /home/zeljko/catkin_ws/build/tp_gui/ui_main_window.h /home/zeljko/catkin_ws/src/tp_gui/ui/main_window.ui

tp_gui/include/tp_gui/moc_main_window.cxx: /home/zeljko/catkin_ws/src/tp_gui/include/tp_gui/main_window.hpp
tp_gui/include/tp_gui/moc_main_window.cxx: tp_gui/include/tp_gui/moc_main_window.cxx_parameters
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/zeljko/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating include/tp_gui/moc_main_window.cxx"
	cd /home/zeljko/catkin_ws/build/tp_gui/include/tp_gui && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/zeljko/catkin_ws/build/tp_gui/include/tp_gui/moc_main_window.cxx_parameters

tp_gui/include/tp_gui/moc_qnode.cxx: /home/zeljko/catkin_ws/src/tp_gui/include/tp_gui/qnode.hpp
tp_gui/include/tp_gui/moc_qnode.cxx: tp_gui/include/tp_gui/moc_qnode.cxx_parameters
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/zeljko/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating include/tp_gui/moc_qnode.cxx"
	cd /home/zeljko/catkin_ws/build/tp_gui/include/tp_gui && /usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/zeljko/catkin_ws/build/tp_gui/include/tp_gui/moc_qnode.cxx_parameters

tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.o: tp_gui/CMakeFiles/tp_gui.dir/flags.make
tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.o: /home/zeljko/catkin_ws/src/tp_gui/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zeljko/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.o"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp_gui.dir/src/main.cpp.o -c /home/zeljko/catkin_ws/src/tp_gui/src/main.cpp

tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp_gui.dir/src/main.cpp.i"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zeljko/catkin_ws/src/tp_gui/src/main.cpp > CMakeFiles/tp_gui.dir/src/main.cpp.i

tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp_gui.dir/src/main.cpp.s"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zeljko/catkin_ws/src/tp_gui/src/main.cpp -o CMakeFiles/tp_gui.dir/src/main.cpp.s

tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.o.requires:

.PHONY : tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.o.requires

tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.o.provides: tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.o.requires
	$(MAKE) -f tp_gui/CMakeFiles/tp_gui.dir/build.make tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.o.provides.build
.PHONY : tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.o.provides

tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.o.provides.build: tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.o


tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.o: tp_gui/CMakeFiles/tp_gui.dir/flags.make
tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.o: /home/zeljko/catkin_ws/src/tp_gui/src/main_window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zeljko/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.o"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp_gui.dir/src/main_window.cpp.o -c /home/zeljko/catkin_ws/src/tp_gui/src/main_window.cpp

tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp_gui.dir/src/main_window.cpp.i"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zeljko/catkin_ws/src/tp_gui/src/main_window.cpp > CMakeFiles/tp_gui.dir/src/main_window.cpp.i

tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp_gui.dir/src/main_window.cpp.s"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zeljko/catkin_ws/src/tp_gui/src/main_window.cpp -o CMakeFiles/tp_gui.dir/src/main_window.cpp.s

tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.o.requires:

.PHONY : tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.o.requires

tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.o.provides: tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.o.requires
	$(MAKE) -f tp_gui/CMakeFiles/tp_gui.dir/build.make tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.o.provides.build
.PHONY : tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.o.provides

tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.o.provides.build: tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.o


tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.o: tp_gui/CMakeFiles/tp_gui.dir/flags.make
tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.o: /home/zeljko/catkin_ws/src/tp_gui/src/qnode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zeljko/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.o"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp_gui.dir/src/qnode.cpp.o -c /home/zeljko/catkin_ws/src/tp_gui/src/qnode.cpp

tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp_gui.dir/src/qnode.cpp.i"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zeljko/catkin_ws/src/tp_gui/src/qnode.cpp > CMakeFiles/tp_gui.dir/src/qnode.cpp.i

tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp_gui.dir/src/qnode.cpp.s"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zeljko/catkin_ws/src/tp_gui/src/qnode.cpp -o CMakeFiles/tp_gui.dir/src/qnode.cpp.s

tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.o.requires:

.PHONY : tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.o.requires

tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.o.provides: tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.o.requires
	$(MAKE) -f tp_gui/CMakeFiles/tp_gui.dir/build.make tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.o.provides.build
.PHONY : tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.o.provides

tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.o.provides.build: tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.o


tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.o: tp_gui/CMakeFiles/tp_gui.dir/flags.make
tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.o: tp_gui/qrc_images.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zeljko/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.o"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp_gui.dir/qrc_images.cxx.o -c /home/zeljko/catkin_ws/build/tp_gui/qrc_images.cxx

tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp_gui.dir/qrc_images.cxx.i"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zeljko/catkin_ws/build/tp_gui/qrc_images.cxx > CMakeFiles/tp_gui.dir/qrc_images.cxx.i

tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp_gui.dir/qrc_images.cxx.s"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zeljko/catkin_ws/build/tp_gui/qrc_images.cxx -o CMakeFiles/tp_gui.dir/qrc_images.cxx.s

tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.o.requires:

.PHONY : tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.o.requires

tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.o.provides: tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.o.requires
	$(MAKE) -f tp_gui/CMakeFiles/tp_gui.dir/build.make tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.o.provides.build
.PHONY : tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.o.provides

tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.o.provides.build: tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.o


tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o: tp_gui/CMakeFiles/tp_gui.dir/flags.make
tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o: tp_gui/include/tp_gui/moc_main_window.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zeljko/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o -c /home/zeljko/catkin_ws/build/tp_gui/include/tp_gui/moc_main_window.cxx

tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.i"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zeljko/catkin_ws/build/tp_gui/include/tp_gui/moc_main_window.cxx > CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.i

tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.s"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zeljko/catkin_ws/build/tp_gui/include/tp_gui/moc_main_window.cxx -o CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.s

tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o.requires:

.PHONY : tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o.requires

tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o.provides: tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o.requires
	$(MAKE) -f tp_gui/CMakeFiles/tp_gui.dir/build.make tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o.provides.build
.PHONY : tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o.provides

tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o.provides.build: tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o


tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o: tp_gui/CMakeFiles/tp_gui.dir/flags.make
tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o: tp_gui/include/tp_gui/moc_qnode.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zeljko/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o -c /home/zeljko/catkin_ws/build/tp_gui/include/tp_gui/moc_qnode.cxx

tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.i"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zeljko/catkin_ws/build/tp_gui/include/tp_gui/moc_qnode.cxx > CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.i

tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.s"
	cd /home/zeljko/catkin_ws/build/tp_gui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zeljko/catkin_ws/build/tp_gui/include/tp_gui/moc_qnode.cxx -o CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.s

tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o.requires:

.PHONY : tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o.requires

tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o.provides: tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o.requires
	$(MAKE) -f tp_gui/CMakeFiles/tp_gui.dir/build.make tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o.provides.build
.PHONY : tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o.provides

tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o.provides.build: tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o


# Object files for target tp_gui
tp_gui_OBJECTS = \
"CMakeFiles/tp_gui.dir/src/main.cpp.o" \
"CMakeFiles/tp_gui.dir/src/main_window.cpp.o" \
"CMakeFiles/tp_gui.dir/src/qnode.cpp.o" \
"CMakeFiles/tp_gui.dir/qrc_images.cxx.o" \
"CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o" \
"CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o"

# External object files for target tp_gui
tp_gui_EXTERNAL_OBJECTS =

/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.o
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.o
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.o
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.o
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: tp_gui/CMakeFiles/tp_gui.dir/build.make
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /usr/lib/x86_64-linux-gnu/libQtGui.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /usr/lib/x86_64-linux-gnu/libQtCore.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /opt/ros/melodic/lib/libroscpp.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /opt/ros/melodic/lib/librosconsole.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /opt/ros/melodic/lib/librosconsole_log4cxx.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /opt/ros/melodic/lib/librosconsole_backend_interface.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /opt/ros/melodic/lib/libroscpp_serialization.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /opt/ros/melodic/lib/libxmlrpcpp.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /opt/ros/melodic/lib/librostime.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /opt/ros/melodic/lib/libcpp_common.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui: tp_gui/CMakeFiles/tp_gui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zeljko/catkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable /home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui"
	cd /home/zeljko/catkin_ws/build/tp_gui && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp_gui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tp_gui/CMakeFiles/tp_gui.dir/build: /home/zeljko/catkin_ws/devel/lib/tp_gui/tp_gui

.PHONY : tp_gui/CMakeFiles/tp_gui.dir/build

tp_gui/CMakeFiles/tp_gui.dir/requires: tp_gui/CMakeFiles/tp_gui.dir/src/main.cpp.o.requires
tp_gui/CMakeFiles/tp_gui.dir/requires: tp_gui/CMakeFiles/tp_gui.dir/src/main_window.cpp.o.requires
tp_gui/CMakeFiles/tp_gui.dir/requires: tp_gui/CMakeFiles/tp_gui.dir/src/qnode.cpp.o.requires
tp_gui/CMakeFiles/tp_gui.dir/requires: tp_gui/CMakeFiles/tp_gui.dir/qrc_images.cxx.o.requires
tp_gui/CMakeFiles/tp_gui.dir/requires: tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_main_window.cxx.o.requires
tp_gui/CMakeFiles/tp_gui.dir/requires: tp_gui/CMakeFiles/tp_gui.dir/include/tp_gui/moc_qnode.cxx.o.requires

.PHONY : tp_gui/CMakeFiles/tp_gui.dir/requires

tp_gui/CMakeFiles/tp_gui.dir/clean:
	cd /home/zeljko/catkin_ws/build/tp_gui && $(CMAKE_COMMAND) -P CMakeFiles/tp_gui.dir/cmake_clean.cmake
.PHONY : tp_gui/CMakeFiles/tp_gui.dir/clean

tp_gui/CMakeFiles/tp_gui.dir/depend: tp_gui/qrc_images.cxx
tp_gui/CMakeFiles/tp_gui.dir/depend: tp_gui/ui_main_window.h
tp_gui/CMakeFiles/tp_gui.dir/depend: tp_gui/include/tp_gui/moc_main_window.cxx
tp_gui/CMakeFiles/tp_gui.dir/depend: tp_gui/include/tp_gui/moc_qnode.cxx
	cd /home/zeljko/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zeljko/catkin_ws/src /home/zeljko/catkin_ws/src/tp_gui /home/zeljko/catkin_ws/build /home/zeljko/catkin_ws/build/tp_gui /home/zeljko/catkin_ws/build/tp_gui/CMakeFiles/tp_gui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tp_gui/CMakeFiles/tp_gui.dir/depend

