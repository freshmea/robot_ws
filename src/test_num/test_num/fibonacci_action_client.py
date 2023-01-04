import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from test_interfaces.action import Fibonacci

class FibonacciActionClient(Node):
  def __init__(self):
    super().__init__('fibonacci_action_client')
    self.action_client = ActionClient(self, Fibonacci, 'fibonacci')

  def send_goal(self, target):
    goal_msg =Fibonacci.Goal()
    goal_msg.number = target

    self.action_client.wait_for_server()
    self.send_goal_future = self.action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
    self.send_goal_future.add_done_callback(self.goal_response_callback)

  def goal_response_callback(self, future):
    goal_handle = future.result()
    if not goal_handle.accepted:
      self.get_logger().info('Goal Rejected')
      return

    self.get_logger().info('Goal accepted!')

    self.get_result_future = goal_handle.get_result_async()
    self.get_result_future.add_done_callback(self.get_result_callback)

  def get_result_callback(self, future):
    result = future.result().result
    self.get_logger().info(f'Result: {result.array}')
    rclpy.shutdown()

  def feedback_callback(self, feedback_msg):
    feedback = feedback_msg.feedback
    self.get_logger().info(f'Received feedback: {feedback.part_array}')

def main(args=None):
  rclpy.init(args = args)
  node = FibonacciActionClient()
  node.send_goal(25)
  rclpy.spin(node)


if __name__ == '__main__':
  main()

