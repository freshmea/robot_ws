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

```
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

```
		<buildtool_depend>rosidl_default_generators</buildtool_depend>
		<depend>geometry_msgs</# This file is generated from information provided by the datasource.  Changes
```

*		터틀봇의 etc/netplan/50-ini....
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
* ros2 launch turtlebot3_bringup robot.launch.py
* export TURTLEBOT3_MODEL=burger -- 터틀봇의 bashrc 에 export 명령어가 없는 터틀봇이 있음.

- - -
# 2023_1_6
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
# 2023_1_9
- - -
* tp_link 802ac - USB wifi driver 설치
```
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
  * https://github.com/leeeju/aruco_marker-in-ROS2.git
    * 빌드에 문제 있음 - __init__.py 파일과 resource/ros2_aruce 파일이 없음.
		* transformation 파일 없음.
    * freshmea/imgtran Node으로 compressedimg 를 rawimage 로 바꾸어야 함.

* github 문제 수정. 패키지를 받았을 때 .git 폴더 지우고 push
* wifi 속도 문제 인터넷 연결 없이 공유기로만 연결 했을 때 정상적으로 빨라짐.
* 터틀봇 움직이거나 scan data발행에는 문제 없음.
* raspicam2-node에서 발행하는 Topic 이 너무 느림. 평균 0.15 Hz
* 적어도 30 Hz이상으로 나와야 프로젝트 하는데 문제가 없어 보임.


