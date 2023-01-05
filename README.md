# robot_ws
2022 gunsan-universe ros2

- - -
# 2022_12_29
- - -
* ros2 seminar data
* 세미나 데이타 작성
* 카메라 작착 및 카메라 테스트
	* turtlebot에서 작업.
		* git clone https://github.com/christianrauch/raspicam2_node.git
		* sudo apt autoremove --purge libgles2-mesa-dev mesa-common-dev 충돌하는 비디오제거
		* sudo add-apt-repository ppa:ubuntu-pi-flavour-makers/ppa 파이캠 필요한 라이브러리
		* sudo apt install libraspberrypi-bin libraspberrypi-dev 파이캠 필요한 라이브러리
		* sudo usermod -a -G video ubuntu 카메라 유저권한 접근성 등록.
		* sudo apt-get install v4l-utils
		* v4l2-ctl --list-devices	카메라 잡히는지 확인.
		* df -h #Find your device numbert 디바이스 확인.
		* wget https://archive.raspberrypi.org/debian/pool/main/r/raspi-config/raspi-config_20160527_all.deb -P /tmp 라스피컨피그 설치
		* sudo apt-get install libnewt0.52 whiptail parted triggerhappy lua5.1 alsa-utils -y 라스피컨피크 설치
		* sudo apt-get install -fy
		* sudo dpkg -i /tmp/raspi-config_20160527_all.deb
	* sudo apt install ros-foxy-image-tnsport* 노트북에 관련 패키지 설치.
* 터틀봇에 아두이노 붙여서 사용하기.


- - -
# 2023_1_2
- - -
*   251  sudo snap remove code
*   https://code.visualstudio.com/download deb 형식의 code 다운로드
*   251  sudo dpkg -i code_1.74.2-1671533413_amd64.deb
*  교재 공유파일 https://docs.google.com/document/d/1M5vvPW4T-iGDn9OfTm11QD2-iIx4zfwA/edit?usp=sharing&ouid=110802073475643720339&rtpof=true&sd=true
*  https://github.com/naver/nanumfont


- - -
# 2023_1_2
- - -
* 우분투 설치 20.04 버전 Vmware 안에 설치.
	* image 주소 : https://releases.ubuntu.com/focal/ 데스크탑 버전 설치
* ROS2 설치:
	* foxy : sudo apt install ros-foxy-desktop ros-foxy-rmw-fastrtps* ros-foxy-rmw-cyclonedds*
* testpub testsub 으로 ROS2 정상작동 확인.
* turtlesim_node 실행 후 teleop 으로 움직임 확인.
* ROS2 파이썬 패키지 만들기.

- - -
# 2023_1_3
- - -
* bashrc 의 내용 수정 띄어 쓰기 문제.
	* 소스 수정
```
source /opt/ros/foxy/setup.bash
source ~/robot_ws/install/local_setup.bash

source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash
source /usr/share/vcstool-completion/vcs.bash
source /usr/share/colcon_cd/function/colcon_cd.sh
export _colcon_cd_root=~/robot_ws

export ROS_DOMAIN_ID=23
export ROS_NAMESPACE=robot1

export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
# export RMW_IMPLEMENTATION=rmw_connext_cpp
# export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
# export RMW_IMPLEMENTATION=rmw_gurumdds_cpp

# export RCUTILS_CONSOLE_OUTPUT_FORMAT='[{severity} {time}] [{name}]: {message} ({function_name}() at {file_name}:{line_number})'
export RCUTILS_CONSOLE_OUTPUT_FORMAT='[{severity}]: {message}'
export RCUTILS_COLORIZED_OUTPUT=1
export RCUTILS_LOGGING_USE_STDOUT=0
export RCUTILS_LOGGING_BUFFERED_STREAM=1

alias cw='cd ~/robot_ws'
alias cs='cd ~/robot_ws/src'
alias ccd='colcon_cd'

alias cb='cd ~/robot_ws && colcon build --symlink-install'
alias cbs='colcon build --symlink-install'
alias cbp='colcon build --symlink-install --packages-select'
alias cbu='colcon build --symlink-install --packages-up-to'
alias ct='colcon test'
alias ctp='colcon test --packages-select'
alias ctr='colcon test-result'
alias sb='source ~/.bashrc'

alias rt='ros2 topic list'
alias re='ros2 topic echo'
alias rn='ros2 node list'

alias killgazebo='killall -9 gazebo & killall -9 gzserver  & killall -9 gzclient'

alias af='ament_flake8'
alias ac='ament_cpplint'

alias testpub='ros2 run demo_nodes_cpp talker'
alias testsub='ros2 run demo_nodes_cpp listener'
alias testpubimg='ros2 run image_tools cam2image'
alias testsubimg='ros2 run image_tools showimage'
```
* 1교시 메세지 퍼블리셔 섭스크라이버 작성.
* 2교시 노드 분석.


*  Saas 연습 google slide  : https://docs.google.com/presentation/d/1jwksntFzRzFbpEtHJCzOahT5loVWIPO-PtTMm4BnxtY/edit?usp=sharing

* 코딩으로 만든 node 를 통해서 turtlesim 움직이기
* ros2 run packagename command --ros-args -r __ns:=/namespcename
* ros2 service call /spawn turtlesim/srv/Spawn "{x: 5.5 , y: 7.0 , theta: 1.5, name: 'turtle2'}"
	터틀심 스폰 시키기
* ros2 service call /turtle1/set_pen turtlesim/srv/SetPen "{r: 100, g: 50, b: 200, width : 5}"
* 한 화면에서 두개의 터틀 동시에 움직이기  --> 다 한 친구는 세개나 네개를 완성시켜보세요.
* opencv 실습

* vmware workstation 17 에서 네트워크 브릿지로 설정 하는 방법 찾아 보기
	* https://dany-it.tistory.com/338
	* https://cocatv.tistory.com/84


- - -
# 2023_1_4
- - -
* 서비스 설명
* 서비스 코드 작성
* 인터페이스 패키지 만들기
	* interface 용 패키지 만들고 topic, service 만듬 [test_interfaces/msg/Num.msg, test_interfaces/srv/AddThreeInts.srv, test_interfaces/srv/MinusThreeInts.srv]
	* cmakelists.txt 수정
		* find_package(rosidl_default_generators REQUIRED)
		*
		```
		rosidl_generate_interfaces(${PROJECT_NAME}
		"msg/Num.msg"
		"msg/Sphere.msg"
		"srv/AddThreeInts.srv"
		"srv/MinusThreeInts.srv"
		DEPENDENCIES geometry_msgs
		)
		```
		* package.xml 수정
```
		<buildtool_depend>rosidl_default_generators</buildtool_depend>
		<depend>geometry_msgs</# This file is generated from information provided by the datasource.  Changes
```
```
# to it will not persist across an instance reboot.  To disable cloud-init's
# network configuration capabilities, write a file
# /etc/cloud/cloud.cfg.d/99-disable-network-config.cfg with the following:
# network: {config: disabled}
network:
  version: 2
  renderer: networkd
  ethernets:
    eth0:
      dhcp4: true
      dhcp6: true
      optional: true
  wifis:
    wlan0:
      dhcp4: true
      dhcp6: true
      access-points:
        turtle:
          password: turtlebot3depend>
		<exec_depend>rosidl_default_runtime</exec_depend>
		<member_of_group>rosidl_interface_packages</member_of_group>
```
	* test_num package 만들어서 service test
		* test_service_ser, test_service_client ... 등등..
	* 과제 : 한 노드에 두개의 서비스가 작동하게 만들기. AddThreeInts, MinusThreeInts.
	* topic, service, action 의 차이점 설명
	* parameter 설명.
	*

* 서비스 코드

- - -
# 2023_1_5
- - -
* action code 해석
* action code flow 분석
* parmameter 설명
* turtlesim 으로 parameter 연습
* launch 파일 작성과 launch 파일로 파라미터 작성 하고 적용하기
	* 추가 : launch 파일을 패키지에 넣어서 share 적용하는법. - python
	* 파일로 parameter를 저장해서 launch 파일로 불러와서 적용하는법. -python
* 2시 - 터틀봇 개봉 및 설명.

* 50-clound-init.yaml
```
# This file is generated from information provided by the datasource.  Changes
# to it will not persist across an instance reboot.  To disable cloud-init's
# network configuration capabilities, write a file
# /etc/cloud/cloud.cfg.d/99-disable-network-config.cfg with the following:
# network: {config: disabled}
network:
  version: 2
  renderer: networkd
  ethernets:
    eth0:
      dhcp4: true
      dhcp6: true
      optional: true
  wifis:
    wlan0:
      dhcp4: true
      dhcp6: true
      access-points:
        turtle:
          password: turtlebot3
```
* wifi와 wifi패스워드가 등록이 안되어 있는 터블봇이 있음. 수업 진행전 확인 필요.
* nmap -sn ...../32 로 ip 확인하고 터틀봇에 접속

* wifi 설정에 문제가 있어서 1시간 정도 지체됨.
* 5시에 터틀봇 확인하고 패키지 설치
	*
	```
	sudo apt-get install ros-foxy-gazebo-*
	sudo apt install ros-foxy-cartographer
	sudo apt install ros-foxy-cartographer-ros
	sudo apt install ros-foxy-navigation2
	sudo apt install ros-foxy-nav2-bringup
	source ~/.bashrc
	sudo apt install ros-foxy-dynamixel-sdk
	sudo apt install ros-foxy-turtlebot3-msgs
	sudo apt install ros-foxy-turtlebot3

	```
* 추가 : launch 파일을 패키지에 넣어서 share 적용하는법. - python
```
import os
from glob import glob
from setuptools import setup

package_name = 'py_param_tutorial'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='kimsooyoung',
    maintainer_email='tge1375@naver.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'param_example = py_param_tutorial.param_example:main',
        ],
    },
)
```
* 파일로 parameter를 저장해서 launch 파일로 불러와서 적용하는법. -python
```
import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    param_ex_node = Node(
        package='py_param_tutorial',
        executable='param_example',
        name='param_example',
        output='screen',
        parameters=[
            {'string_param': 'Hello'},
            {'int_param': 112},
        ],
    )

    # config = os.path.join(
    #     get_package_share_directory('py_param_tutorial'), 'config', 'params.yaml'
    # )
    
    # param_ex_node = Node(
    #     package = 'py_param_tutorial',
    #     executable = 'param_example',
    #     name = 'param_example',
    #     output='screen',
    #     parameters = [config]
    # )


    return LaunchDescription([
        param_ex_node
    ])
```
