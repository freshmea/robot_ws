import rclpy
from rclpy.node import Node
from test_interfaces.srv import AddThreeInts


class Num_srv(Node):
  def __init__(self):
    super().__init__('add_int_service')
    self.service_srv= self.create_service(AddThreeInts, 'add_int', self.int_callback)

  def int_callback(self, request, response):
    self.sum = request.a + request.b + request.c
    response.sum = self.sum
    return response


def main(args=None):
  rclpy.init(args=args)
  node = Num_srv()
  try:
    rclpy.spin(node)
  except KeyboardInterrupt:
    node.get_logger().info('Keyboard interrupt!!!!')
  finally:
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
  main()
