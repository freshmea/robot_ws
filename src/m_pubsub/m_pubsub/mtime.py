import rclpy
from rclpy.node import Node
from std_msgs.msg import Header
from rclpy.qos import QoSProfile


class Real_time_pub(Node):
  def __init__(self):
    super().__init__('time_publisher')
    self.qos_profile = QoSProfile(depth = 10)
    self.massage_publisher = self.create_publisher(Header, 'time', self.qos_profile)
    self.timer = self.create_timer(0.01, self.m_publisher)

  def m_publisher(self):
    msg = Header()
    msg.stamp = self.get_clock().now().to_msg()
    self.massage_publisher.publish(msg)
    self.get_logger().info(f'Published mesage: {msg.stamp}')
    self.get_logger().info(f'Published mesage: {self.get_clock().now().seconds_nanoseconds()}')


def main(args=None):
  rclpy.init(args=args)
  node = Real_time_pub()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main':
  main()
