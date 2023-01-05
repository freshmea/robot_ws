from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.substitutions import TextSubstitution
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument

def generate_launch_description():
  my_para_de = DeclareLaunchArgument('my_para_launch', default_value=TextSubstitution(text='default_para'))

  para_node = Node(
    package='test_para',
    executable='tp',
    parameters=[{
      'my_para': LaunchConfiguration('my_para_launch')
    }]
    )

  return LaunchDescription(
      [
        my_para_de,
        para_node
      ]
    )
