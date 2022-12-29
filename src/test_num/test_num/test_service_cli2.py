from test_interfaces.srv import MinusThreeInts
import sys
import rclpy
from rclpy.node import Node

class MClintAsynce(Node):
  def __init__(self):
    super().__init__('mservice_cli2')
    self.cli = self.create_client(MinusThreeInts, 'minus_three_ints')
    while not self.cli.wait_for_service(timeout_sec=1.0):
      self.get_logger().info('service not available, waiting again...')
    self.req = MinusThreeInts.Request()

  def send_request(self):
    self.req.a = int(sys.argv[1])
    self.req.b = int(sys.argv[2])
    self.req.c = int(sys.argv[3])
    self.future = self.cli.call_async(self.req)

def main(args = None):
  rclpy.init(args = args)

  mclint = MClintAsynce()
  mclint.send_request()

  while rclpy.ok():
    rclpy.spin_once(mclint)
    if mclint.future.done():
      try:
        response = mclint.future.result()
      except Exception as e:
        mclint.get_logger().info('Service call failed %r'%(e,))
      else :
        mclint.get_logger().info(f'Result of add_three_ints: {mclint.req.a} -{mclint.req.b} -{mclint.req.c} = {response.sum}')
      break
  mclint.destroy_node()
  rclpy.shutdown()

if __name__ == '__main__':
  main()
