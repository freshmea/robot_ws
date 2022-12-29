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





