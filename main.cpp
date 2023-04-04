#include <iostream>
#include "rclcpp/rclcpp.hpp"

using namespace rclcpp;
int main(int argc, char* argv[]) {
    // Process ros2-related command-line arguments and initialize ros2 for this process
    init(argc, argv);

    // Create a ros2 Node, which owns one or more ros2 interfaces
    auto node = std::make_shared<Node>("hello_world_node");

    // Broadcast a simple log message
    RCLCPP_INFO(node->get_logger(), "Hello, world!");

    // Process ros2 callbacks until receiving SIGINT (ctrl-c)
    spin(node);

    // Stop the Node's resources
    shutdown();

    // Exit
    std::cout << "Goodbye, world!" << std::endl;
    return 0;
}
