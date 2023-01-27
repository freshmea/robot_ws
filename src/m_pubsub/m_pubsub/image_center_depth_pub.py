import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from rclpy.qos import QoSProfile
from sensor_msgs.msg import Image
import numpy as np
from cv_bridge import CvBridge, CvBridgeError

class M_pub(Node):
  def __init__(self):
    super().__init__('massage_publisher')
    self.qos_profile = QoSProfile(depth = 10)
    self.massage_publisher = self.create_publisher(String, 'massage', self.qos_profile)
    self.helloworld_subscriber = self.create_subscription(Image, '/camera/aligned_depth_to_color/image_raw', self.subscriber_depth_image, self.qos_profile)
    self.timer = self.create_timer(1, self.m_publisher)
    self.count = 0
    self.distance = 0.0
    self.top_left = []
    self.top_middle = []
    self.top_right = []

  def avr(self, data):
    re = 0
    print(data)
    for a in data:
      re += a/len(data)
    return int(re)

  def subscriber_depth_image(self, msg):
    bridge = CvBridge()
    try:
      # depth_image = bridge.imgmsg_to_cv2(msg.data, desired_encoding="passthrough")
      depth_array = np.array(msg.data, dtype=np.float32)
    except CvBridgeError:
      print('error CvBridge')

    # depth_image = bridge.imgmsg_to_cv2(msg.data, "passthrough")
    # depth_array = np.array(msg.data, dtype=np.float32)
    print(depth_array)
    print(len(depth_array))
    height_middle_value = msg.height /2
    width_middle_value = msg.width / 2
    print (f'lenth of data: {len(msg.data)}')
    # print(f'index of center data: {int(width_middle_value + msg.width * height_middle_value)}')
    # print(int(len(msg.data)/4))
    self.distance =  msg.data[int(width_middle_value + msg.width * height_middle_value)]
    self.top_left.append(msg.data[0])
    self.top_middle.append(msg.data[msg.height // 2])
    self.top_right.append(msg.data[msg.height])
    print('top_left', self.avr(self.top_left[-100:]))
    print('top_middle', self.avr(self.top_middle[-100:]))
    print('top_right', self.avr(self.top_right[-100:]))
    print(self.distance)

  def m_publisher(self):
    msg = String()
    msg.data = f'center distance {self.count} : {self.distance} m'
    self.massage_publisher.publish(msg)
    self.get_logger().info(f'Published mesage: {msg.data}')
    self.count += 1


def main(args=None):
  rclpy.init(args=args)
  node = M_pub()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main':
  main()
