import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, CompressedImage
from cv_bridge import CvBridge
import cv2
import numpy as np

class ImageTransffer(Node):

    def __init__(self):
        super().__init__('imagetransffer')

        self.subscription = self.create_subscription(CompressedImage, 
                'camera/image/compressed', 
                self.listener_callback, 
                10)

        self.publisher_ = self.create_publisher(Image, 'image_raw', 10)
        self.br = CvBridge()

    def listener_callback(self, data):
        self.frame = self.br.compressed_imgmsg_to_cv2(data)
        self.frame = self.br.cv2_to_imgmsg(self.frame)
        self.publisher_.publish(self.frame)

def main(args=None):
    rclpy.init(args=args)
    node = ImageTransffer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
