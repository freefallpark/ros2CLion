# Running ros2 in CLion
## Installing ros2
I installed foxy because I'm on ubuntu 20.04 but i believe the instructions are fairly similar/easy:
[Foxy Fitzroy ros2 Distro](http://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html)

## Running ros2Test
In order to run this program you must open CLion from a terminal that has been properly setup for ros2

### Setting up Terminal for ros2 
1. In order to have the terminal always ready upon opening, execute the following commands
   1. echo "source /opt/ros/foxy/setup.bash" >> ~/.bashrc
   2. echo "export ROS_DOMAIN_ID=1" >> ~/.bashrc
   3. echo "export ROS_LOCALHOST_ONLY=1" >> ~/.bashrc
2. These commands will append to the bottom of your .bashrc file. Now whenever you open a terminal it will be ready to
use the ros packages.

### Start CLion via terminal and open this project.
1. clion <path to directory>/ros2Test

   For example:
      ``` clion ~/CLionProjects/ros2Test```