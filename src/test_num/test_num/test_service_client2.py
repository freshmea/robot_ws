import rclpy
from rclpy.node import Node
from test_interfaces.srv import AddThreeInts
# import sys

class Num_cli(Node):
  def __init__(self):
    super().__init__('add_int_client')
    self.cli = self.create_client(AddThreeInts, 'add_int')
    while not self.cli.wait_for_service(timeout_sec=1.0):
      self.get_logger().info('service not available, waiting again...')
    self.cli_timer =self.create_timer(5, self.call_back)
    self.var_a = 4
    self.var_b = 8
    self.var_c = 15

  def request_add(self):
    print(self.cli.service_is_ready())
    self.req = AddThreeInts.Request()
    # self.response = AddThreeInts.Response()
    self.req.a = self.var_a
    self.req.b = self.var_b
    self.req.c = self.var_c
    self.future = self.cli.call_async(self.req)
    rclpy.spin_until_future_complete(self, self.future, timeout_sec=1.0)
    print(self.future.result(), self.req.a)
    try:
      self.response = self.future.result()
    except Exception as e:
      self.get_logger().info('Service call failed %r'%(e,))
    else :
      self.get_logger().info(f'Result of add_three_ints: {self.req.a} +{self.req.b} +{self.req.c} = {self.response.sum}')

  def call_back(self):
    self.future = self.request_add()

def main(args = None):
  rclpy.init(args=args)
  node = Num_cli()

  for i in range(3):
    node.request_add()

  node.destroy_node()
  rclpy.shutdown()

if __name__ == '__main__':
  main()
