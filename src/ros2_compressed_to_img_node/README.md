# ros2_compressed_to_img_node
compressed image topic to image massage node 
- - -
# 배경
- - - 
* https://github.com/christianrauch/raspicam2_node  여기에서 
 raspicam2_Node 를 터틀봇에 설치 하고 발행 되는 compressed topic 을 핫스팟으로 
 받은 다음에 
* raspicam dev/video0 가 생기지 않는다면 https://www.codetd.com/en/article/12943496
 여기에서 추천해주는 순서대로 실행. 
* https://github.com/pal-robotics/aruco_ros 여기에서 ar-marker 인식 프로그램을 
 받아서 노트북에서 실행 시키면 서로 연결이 안된다. 
* aruco 에서는 compressed image 를 받지 않는데, 터틀봇에서 raw 이미지를 전송하면 속도가
많이 느려 진다. 
* 노트북에서 compresed image 를 받아서 raw 이미지로 다시 바꾸는 노드가 필요한데 찾아보면 
찾을 수가 없어서 만듬. 
* ros2 에 있는 ros2 run img_tranport republish 를 사용하려고 했으나 어찌 된 일인지 
토픽이 발행이 안됨. ( )
