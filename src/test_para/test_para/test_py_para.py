import rclpy
from rclpy.node import Node

class TParam(Node):
  def __init__(self):
    super().__init__('tparam')
    self.declare_parameter('my_para', '내가만든파라미터')
    self.timer = self.create_timer(1, self.para)
    self.a= 'dddd'

  def para(self):
    my_para = self.get_parameter('my_para').get_parameter_value()._string_value
    my_para = self.get_parameter('my_para').get_parameter_value().string_value
    self.get_logger().info(f'파라미터를 출력합니다: [{my_para}]')

def main(args = None):
  rclpy.init()
  node = TParam()
  rclpy.spin(node)
  rclpy.shutdown

if __name__ == '__main__':
  main()
