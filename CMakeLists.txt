cmake_minimum_required(VERSION 3.16)
project(ros2Test)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Find required packages
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# Add executable
add_executable(ros2Test main.cpp)

# Link executable with required libraries
target_link_libraries(ros2Test ${rclcpp_LIBRARIES} ${std_msgs_LIBRARIES})

# Install executable
install(TARGETS ros2Test
        DESTINATION lib/${PROJECT_NAME})

# Install launch files
install(DIRECTORY launch
        DESTINATION share/${PROJECT_NAME})

# Add ament dependencies
ament_target_dependencies(ros2Test rclcpp std_msgs)

# Install package.xml
install(FILES package.xml
        DESTINATION share/${PROJECT_NAME})
