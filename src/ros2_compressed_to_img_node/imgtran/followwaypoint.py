import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from rclpy.action import ActionClient
from action_msgs.msg import GoalStatus
from nav2_msgs.action import FollowWaypoints
# from rclpy.duration import Duration # Handles time for ROS 2
# from action_msgs.msg import GoalStatus

class ClientFollowPoints(Node):

    def __init__(self):
        super().__init__('client_follow_points')
        self._client = ActionClient(self, FollowWaypoints, '/FollowWaypoints')

    def send_points(self, points):
        msg = FollowWaypoints.Goal()
        msg.poses = points

        self._client.wait_for_server()
        self._send_goal_future = self._client.send_goal_async(msg, feedback_callback=self.feedback_callback)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        # action_status = future.result().status
        # if action_status == GoalStatus.STATUS_SUCCEEDED:
        self.get_logger().info(f'Result: {result.missed_waypoints}')
            # self.get_logger().info(f'Result: {action_status}')
        # else :
        #     self.get_logger().info(f'Result: action failed Result: {action_status}')
        # self.get_logger().info(f'Result: {action_status}')
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: {0}'.format(feedback.current_waypoint))

def main(args=None):
    rclpy.init(args=args)

    follow_points_client = ClientFollowPoints()
    print('client inited')

    rgoal = PoseStamped()
    rgoal.header.frame_id = "map"
    rgoal.header.stamp.sec = 0
    rgoal.header.stamp.nanosec = 0
    rgoal.pose.position.z = 0.0
    rgoal.pose.position.x = -3.6
    rgoal.pose.position.y = -1.3
    rgoal.pose.orientation.w = 1.0
    mgoal = [rgoal]

    follow_points_client.send_points(mgoal)
    rclpy.spin(follow_points_client)

    rclpy.init(args=args)
    follow_points_client = ClientFollowPoints()
    rgoal2 = PoseStamped()
    rgoal2.header.frame_id = "map"
    rgoal2.header.stamp.sec = 0
    rgoal2.header.stamp.nanosec = 0
    rgoal2.pose.position.z = 0.0
    rgoal2.pose.position.x = -2.2
    rgoal2.pose.position.y = -1.1
    rgoal2.pose.orientation.w = 1.0
    mgoal = [rgoal2]
    follow_points_client.send_points(mgoal)
    rclpy.spin(follow_points_client)
    print('ok')
