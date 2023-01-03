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
	* 	source /opt/ros/foxy/setup.bash
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
* 1교시 메세지 퍼블리셔 섭스크라이버 작성.
