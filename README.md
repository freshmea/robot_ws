# robot_ws

2022 gunsan-universe ros2

* <https://github.com/naver/nanumfont>
* 군산대 발표용 google slide  : <https://docs.google.com/presentation/d/1jwksntFzRzFbpEtHJCzOahT5loVWIPO-PtTMm4BnxtY/edit?usp=sharing>
* 수업 figma 파일 링크 :
<https://www.figma.com/file/O3kvivFXVoUVVv0GKIfq4N/%EA%B5%B0%EC%82%B0%EB%8C%80-ROS2-%EC%88%98%EC%97%85?node-id=0%3A1&t=8QLYeoqWDnsbhHLL-1>
* 중간발표 영상 <https://photos.app.goo.gl/paB3937ShA3Xmvnt8>

- - -

## 2022_12_29

- - -

* ros2 seminar data
* 세미나 데이타 작성
* 카메라 작착 및 카메라 테스트
  * turtlebot에서 작업.
    * git clone <https://github.com/christianrauch/raspicam2_node.git>
    * sudo apt autoremove --purge libgles2-mesa-dev mesa-common-dev 충돌하는 비디오제거
    * sudo add-apt-repository ppa:ubuntu-pi-flavour-makers/ppa 파이캠 필요한 라이브러리
      * <https://askubuntu.com/questions/1130052/enable-i2c-on-raspberry-pi-ubuntu>
    * sudo apt install libraspberrypi-bin libraspberrypi-dev 파이캠 필요한 라이브러리
    * sudo usermod -a -G video ubuntu 카메라 유저권한 접근성 등록.
    * sudo apt-get install v4l-utils
    * v4l2-ctl --list-devices 카메라 잡히는지 확인.
    * df -h #Find your device numbert 디바이스 확인.
    * wget <https://archive.raspberrypi.org/debian/pool/main/r/raspi-config/raspi-config_20160527_all.deb> -P /tmp 라스피컨피그 설치
    * sudo apt-get install libnewt0.52 whiptail parted triggerhappy lua5.1 alsa-utils -y 라스피컨피크 설치
    * sudo apt-get install -fy
    * sudo dpkg -i /tmp/raspi-config_20160527_all.deb
    * /boot/firmware/config.txt 파일 맨 밑에 추가

```bash
  start_x=1
  gpu_mem=128
```

* sudo apt install ros-foxy-image-transport* 노트북에 관련 패키지 설치.
* 터틀봇에 아두이노 붙여서 사용하기.

- - -

## 2023_1_2

- - -

* 251  sudo snap remove code
* <https://code.visualstudio.com/download> deb 형식의 code 다운로드
* 251  sudo dpkg -i code_1.74.2-1671533413_amd64.deb
* 교재 공유파일 <https://docs.google.com/document/d/1M5vvPW4T-iGDn9OfTm11QD2-iIx4zfwA/edit?usp=sharing&ouid=110802073475643720339&rtpof=true&sd=true>
* <https://github.com/naver/nanumfont>

* 우분투 설치 20.04 버전 Vmware 안에 설치.
  * image 주소 : <https://releases.ubuntu.com/focal/> 데스크탑 버전 설치
* ROS2 설치:
  * foxy : sudo apt install ros-foxy-desktop ros-foxy-rmw-fastrtps*ros-foxy-rmw-cyclonedds*
* testpub testsub 으로 ROS2 정상작동 확인.
* turtlesim_node 실행 후 teleop 으로 움직임 확인.
* ROS2 파이썬 패키지 만들기.

- - -

## 2023_1_3

- - -

* bashrc 의 내용 수정 띄어 쓰기 문제.
  * 소스 수정

```bash
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
alias testsubimg='rhttps://photos.app.goo.gl/paB3937ShA3Xmvnt8os2 run image_tools showimage'
```

* 1교시 메세지 퍼블리셔 섭스크라이버 작성.
* 2교시 노드 분석.

* Saas 연습 google slide  : <https://docs.google.com/presentation/d/1jwksntFzRzFbpEtHJCzOahT5loVWIPO-PtTMm4BnxtY/edit?usp=sharing>

* 코딩으로 만든 node 를 통해서 turtlesim 움직이기
* ros2 run packagename command --ros-args -r __ns:=/namespcename
* ros2 service call /spawn turtlesim/srv/Spawn "{x: 5.5 , y: 7.0 , theta: 1.5, name: 'turtle2'}"
 터틀심 스폰 시키기
* ros2 service call /turtle1/set_pen turtlesim/srv/SetPen "{r: 100, g: 50, b: 200, width : 5}"
* 한 화면에서 두개의 터틀 동시에 움직이기  --> 다 한 친구는 세개나 네개를 완성시켜보세요.
* opencv 실습

* vmware workstation 17 에서 네트워크 브릿지로 설정 하는 방법 찾아 보기
  * <https://dany-it.tistory.com/338>
  * <https://cocatv.tistory.com/84>

- - -

## 2023_1_4

- - -

* 서비스 설명
* 서비스 코드 작성
* 인터페이스 패키지 만들기
  * interface 용 패키지 만들고 topic, service 만듬 [test_interfaces/msg/Num.msg, test_interfaces/srv/AddThreeInts.srv, test_interfaces/srv/MinusThreeInts.srv]
  * cmakelists.txt 수정

```bash
  find_package(rosidl_default_generators REQUIRED)

  rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Num.msg"
  "msg/Sphere.msg"
  "srv/AddThreeInts.srv"
  "srv/MinusThreeInts.srv"
  DEPENDENCIES geometry_msgs
  )
```

* package.xml 수정

```xml
  <buildtool_depend>rosidl_default_generators</buildtool_depend>
  <depend>geometry_msgs</# This file is generated from information provided by the datasource.  Changes
```

* 터틀봇의 etc/netplan/50-ini....

```bash
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
* 서비스 코드

- - -

## 2023_1_5

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

```bash
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

 ```bash
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

* ros2 launch turtlebot3_bringup robot.launch.py
* export TURTLEBOT3_MODEL=burger -- 터틀봇의 bashrc 에 export 명령어가 없는 터틀봇이 있음.

- - -

## 2023_1_6

- - -

* 파라미터 파일로 설정하는 방법과 패키지에 넣는 방법 설명.
* config 의 yaml 파일이 install 의 올바른 경로로 복사되지 않는 문제가 발생. - 원인 추후 해결.
* 터틀봇 wifi 연결 문제. 공유기의 ip 가 컴퓨터의 맥 주소와 일치하지 않으면 topic이 wifi로 전달되지 않는 문제 발생
---> 컴퓨터와 같이 켜서 인증 문제를 해결하고 실행. 해결
* 노틸러스 sftp 설정.
* tb3 move 패키지 만들어서 터틀봇 움직임 제어.
* 와이파이 공유기 새로 설치 하고 turtle1, turtle2 로 접속
* 카메라 모듈 나누어줌.
* 카메라 세팅.

- - -

## 2023_1_9

- - -

* tp_link 802ac - USB wifi driver 설치

```bash
sudo apt purge rtl8812au-dkms
sudo apt install git
git clone https://github.com/gnab/rtl8812au.git
sudo cp -r rtl8812au  /usr/src/rtl8812au-4.2.2
sudo dkms add -m rtl8812au -v 4.2.2
sudo dkms build -m rtl8812au -v 4.2.2
sudo dkms install -m rtl8812au -v 4.2.2
```

* -> 속도 빨라짐. 원활한 통신 환경을 위해서 좋은 wifi 모듈이 필요함. 아니면 노트북 와이파이 사용 권장.

* 어댑터 전원 이슈가 있음
  * 배터리로 동작 하면 잘 되는데 어댑터로 오래 연결시 라즈베리파이가 꺼짐. 군산대 학교 220V 전원 정류문제가 있는듯.
* domain ID 가 달라도 상대편 터틀봇이 움직이는 현상 발견
  * wifi와 랜선이 동시에 연결 되었을 때 랜선 연결을 끊지 않으면 domain ID가 달라도 topic 이 전달 되는것 같음.

* aruco node 사용.
  * ar marker generator 사용.
    * ros2 run ros2_aruco aruco_generate_marker --id 1 --size 200 --dictionary DICT_4X4_100
    *
  * <https://github.com/leeeju/aruco_marker-in-ROS2.git>
    * 빌드에 문제 있음 - __init__.py 파일과 resource/ros2_aruce 파일이 없음.
      * transformation 파일 없음.
    * freshmea/imgtran Node으로 compressedimg 를 rawimage 로 바꾸어야 함.

```bash
cd ~/robot_ws/src
git clone https://github.com/freshmea/ros2_compressed_to_img_node.git
source ~/.bashrc
ros2 run imgtran imgtransfer
```

* github 문제 수정. 패키지를 받았을 때 .git 폴더 지우고 push
* wifi 속도 문제 인터넷 연결 없이 공유기로만 연결 했을 때 정상적으로 빨라짐.
* 터틀봇 움직이거나 scan data발행에는 문제 없음.
* raspicam2-node에서 발행하는 Topic 이 너무 느림. 평균 0.15 Hz
* 적어도 30 Hz이상으로 나와야 프로젝트 하는데 문제가 없어 보임.

- - -

## 2023_1_10

- - -

* GPIO 적용법
* <https://m.blog.naver.com/audiendo/220771658560>
* GPIO 사용법 <http://lhdangerous.godohosting.com/wiki/index.php/Raspberry_pi_%EC%97%90%EC%84%9C_python%EC%9C%BC%EB%A1%9C_GPIO_%EC%82%AC%EC%9A%A9%ED%95%98%EA%B8%B0>
* GPIO pwm 제어 <https://rasino.tistory.com/341>
* GIPO zero 사용법  <https://blog.naver.com/PostView.naver?blogId=emperonics&logNo=221831160948&redirect=Dlog&widgetTypeCall=true&directAccess=false>
* <https://www.raspberrypi-spy.co.uk/2018/02/basic-servo-use-with-the-raspberry-pi/>
* GPIO zero reference <https://gpiozero.readthedocs.io/en/stable/installing.html>
* rossearial micro-ros <https://github.com/micro-ROS>
* <https://micro.ros.org/docs/concepts/middleware/rosserial/>
* RTOS 관련 <https://vuzwa.tistory.com/entry/1-Free-RTOSwith-STM32L475VGT-B-L475E-IOT01A1>

* 프로젝트 관련 참고할 영상과 git
  * <https://www.youtube.com/watch?v=5JBPTG4YDPo>
  * <https://www.youtube.com/watch?v=YSudyAsMKbo>
  * <https://www.youtube.com/watch?v=9Wnu8If1eS4>
  * <https://www.youtube.com/watch?v=1Tdwe7aAvMI>
    * <https://github.com/JooYeonO/manipulator_project>
  * <https://sol2log.notion.site/Robot-house-wife-eca1bc5608d64ebcb52f89a0dc2358a0>
    * <https://github.com/freshmea/robot_housewife>

* 터틀봇3에 인스톨 GPIO

```bash
  sudo apt-get install python-rpi.gpio
  sudo apt install python3-pip
  pip install RPi.GPIO
```

* raspi-config 를 하지 않아도 되는것도 같음..( 확인 필요)
  * <https://velog.io/@hanbyeolee/Raspberry-Pi-4b-Ubuntu-20.04.5-LTS%EC%97%90-Picamera-%EC%84%A4%EC%B9%98%ED%95%98%EB%8A%94-%EB%B0%A9%EB%B2%95>

- - -

## 2023_1_11

- - -

### ROS 관련 자료 찾아 볼 수 있는 곳

* ROS QnA : 로스 QnA
  * <https://answers.ros.org/questions/>
* 오로카 카페 : 한국 로스 커뮤니티
  * <https://cafe.naver.com/openrt>
* ROS2 reference : ros 함수 모아 놓은 곳
  * <https://docs.ros2.org/bouncy/api/rclcpp/classrclcpp_1_1_node.html>
* ROS2 foxy document : foxy 관련 튜토리얼
  * <https://docs.ros.org/en/foxy/index.html>
* REP( Ros enhencement proposals) : ros의 code가 왜 그런지 궁금하면 살펴봄.
  * <https://ros.org/reps/rep-0000.html>
* ros robot : ros로 개발된 로봇 사이트
  * <https://robots.ros.org/>
* ros nav2 관련 설명을 자세히 하고 있음
  * <https://leesangwon0114.github.io/ros2/2022/01/24/ROS2_TurtleBot3_11.Nav2_ROS_Concepts.html>

### SLAM 스터디

* 슬램 기본 설명:
  * <https://saint-swithins-day.tistory.com/83>
  * <https://github.com/tzutalin/awesome-visual-slam>
  * ORB SLAM2 : <https://www.youtube.com/watch?v=7LSV7sjvPaU>
  * NeRF : <https://www.youtube.com/watch?v=kN7kIwRBKis>
  * <https://www.youtube.com/watch?v=kN7kIwRBKis>

* 터틀봇 라스피캠 실행시 cpu 점유율과 네트워크 점유율 확인 필요.
* topic 의 size 를 확인 할 수 있는 수단 필요.
* 네트워크가 감당할 수 있는 data 의 양과 dds 가 처리 할 수 있는 data 의 양 그리고 실제로 네트워크에서 움직이는
data 를 비교 할 수 있는 툴 필요.

- - -

## 2023_1_12

- - -

* odom 변수 초기화 하기 - 초기 odom 값이 map 의 범위를 벗어나면 nav가 실행 되지 않을 때 수행.
  * <https://answers.ros.org/question/213049/how-do-i-reset-the-odom-topic-back-to-0-without-restarting-the-robot/>
  * 초기화 : ros2 topic pub /mobile_base/commands/reset_odometry std_msgs/Empty
  * <https://github.com/ROBOTIS-GIT/turtlebot3/issues/880>
  * 초기위치 변경 :

```bash
ros2 topic pub -1 /pose_relocalization geometry_msgs/Point
```

* navigation
  * waypoint_folloew 접근 하는 방법
    * launch 파일에서 node 를 찾고 opt/ros/foxy 안쪽에서 파일을 확인한다.
    * 소스파일이 바이너리 밖에 없으면 인터넷에서 찾아본다.
  * navigation action 관련 파일
    * action 정의 파일
      * /opt/ros/foxy/share/nav2_msgs/action/FollowWaypoints.action
    * 런치 파일
      * /opt/ros/foxy/share/turtlebot3_navigation2/launch/navigation2.launch.py
      * /opt/ros/foxy/share/navigation_bringup/launch/navigation_launch.py
    * 소스파일은 바이너리 밖에 없음.
      * followwaypoints 소스파일(waypoint_follower) 비슷하게 만든 것(C++)
        * <https://github.com/jackykwok2024/nav2_rviz_waypoint_follower/blob/master/src/waypoint_tool.cpp>
  * python 파일로 만든 followwaypoint action 파일.
    * imgtan 패키지 안에 followwaypoint.py

*카메라 속도 관련

* DDS 의 설정 변경으로 카메라 속도를 테스트할 필요가 있음
* <https://docs.ros.org/en/galactic/How-To-Guides/DDS-tuning.html>
* sudo sysctl net.ipv4.ipfrag_time=3
   *sudo sysctl net.ipv4.ipfrag_high_thresh=134217728
* 실행해 보면 크게 좋아 짐. 0.25 Hz -> 4 Hz
*
*

* 카메라 속도 관련 문제를 해결하기 위해 kernel 과 drive 그리고 라즈베리파이 버전을 확인해서 호환이나
다른 문제가 없는지 확인 필요
  * <https://slowbootkernelhacks.blogspot.com/2020/06/pi-camera-sensor-camera-device-driver.html>

* sudo apt-get install speedtest-cli

* server cli속도 측정을 위해서 퍼프 설치
  * sudo apt-get install iperf
  * 실행 결과 4Mbit/s 500kbye/s 정도가 최대속도임.

```bash
------------------------------------------------------------
Client connecting to 192.168.0.5, TCP port 5001
TCP window size: 85.0 KByte (default)
------------------------------------------------------------
[  3] local 192.168.0.6 port 34994 connected with 192.168.0.5 port 5001
[ ID] Interval       Transfer     Bandwidth
[  3]  0.0-10.3 sec  5.38 MBytes  4.38 Mbits/sec
```

* 카메라 노드 실행중 topic size 는

```bash
17.76 KB/s from 26 messages
 Message size mean: 30.93 KB min: 26.13 KB max: 32.23 KB
17.38 KB/s from 26 messages
 Message size mean: 30.93 KB min: 26.13 KB max: 32.23 KB
```

* 좀더 성능을 향상 시킬 가능성은 있지만 (초당 17 에서 500 까지 ) 다른 토픽 들도 많기 때문에 그리고 터틀봇이 3대 이상 연결 된다면 wifi 한계 때문에 원활한 영상 전송은 힘들거 같다.
  * 그래도 프로젝트를 한 사람들이 있음
    * <https://deepdeepit.tistory.com/118>
    * <https://github.com/DonGikS/behavior_controller>
      * jpg quality를 더 낮추어서 해결했음.(value = 9 ? )

* quality 를 엄청 낮추어서 90 -> 9 로 해결
  * ~/turtlebot3_ws/src/raspicam2_node/cfg/params.yaml 수정
  * 파람 실행 명령어

```bash
ros2 run raspicam2 raspicam2_node --ros-args --params-file `ros2 pkg prefix raspicam2`/share/raspicam2/cfg/params.yaml
```

* 네비게이션 로봇 크기와 inflation 변경 하는 방법 ---> 이건 반드시 보시오!!!!
  * /opt/ros/foxy/share/nav2_bringup/params/nav2_params.yaml 수정
    * local_costmap: local_costmap: ros_parameters: robot_radius  0.11변경
    * local_costmap: local_costmap: ros_parameters: inflation_layer: cost_scaling_factor:  0.3변경
    * local_costmap: local_costmap: ros_parameters: inflation_layer: inflation_radius: 0.055 변경
    * global_costmap: global_costmap: ros_parameters: robot_radius  0.11변경
    * global_costmap: global_costmap: ros_parameters: inflation_layer: cost_scaling_factor:  0.3변경
    * global_costmap: global_costmap: ros_parameters: inflation_layer: inflation_radius: 0.055 변경
  * 네비게이션 관련 변경한 내용이 있으면 turtlebot3_navi 에 있는 param 건들지 말고 여기거를 건드려야 적용됨.
