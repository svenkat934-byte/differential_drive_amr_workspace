#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, TwistStamped

class TwistRelayNode(Node):
    def __init__(self):
        super().__init__("twist_relay")
        self.controller_sub = self.create_subscription(
            Twist,
            "/wheel_controller/cmd_vel_unstamped",
            self.controller_twist_callback,
            10
        )
        self.controller_pub = self.create_publisher(
            TwistStamped,
            "/wheel_controller/cmd_vel",
            10
        )
        self.web_sub = self.create_subscription(
            TwistStamped,
            "/web/cmd_vel_stamped",
            self.web_twist_callback,
            10
        )
        self.web_pub = self.create_publisher(
            Twist,
            "/web/cmd_vel",
            10
        )

    def controller_twist_callback(self, msg):
        twist_stamped = TwistStamped()
        twist_stamped.header.stamp = self.get_clock().now().to_msg()
        twist_stamped.twist = msg
        self.controller_pub.publish(twist_stamped)

    def web_twist_callback(self, msg):
        twist = Twist()
        twist = msg.twist
        self.web_pub.publish(twist)

def main(args=None):
    rclpy.init(args=args)
    node = TwistRelayNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()