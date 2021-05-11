# catkin_ws

Poradie prikazov ked je uz vsetko buildnute:
 
roslaunch gazebo_ros empty_world.launch

roslaunch m2wr_description spawn.launch

roslaunch m2wr_description rviz.launch

rosrun teleop_twist_keyboard teleop_twist_keyboard.py

roslaunch orb_slam2_ros orb_slam2_d435_rgbd.launch


Zdroj ORB SLAM-u:
https://github.com/appliedAI-Initiative/orb_slam_2_ros

Ked pripojim rviz na topic z orb-slamu, tak sa nezobrazuje pointcloud. Pri prikaze rostopic list sa orb-slam topicy zobrazuju ale ked zadam 'rostopic echo nejaky orbslam topic' tak sa nic nezobrazuje. Chybu som hladal v tom ze je subor 'orb_slam2_d435_rgbd.launch' napisany pre d435 a ze sa nejako nezhoduje so senzorom ktory je na robote 'm2wr_description'.


