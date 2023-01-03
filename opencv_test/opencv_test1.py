import cv2
import numpy as np

print(cv2.__version__)
image = cv2.imread('image/face.jpeg', cv2.IMREAD_UNCHANGED)
height, width, channel = image.shape
print(height)
print(width)
print(channel)
# 변환
image_flip = cv2.flip(image, 0)
image_flip2 = cv2.flip(image, 1)
# 회전
matrix = cv2.getRotationMatrix2D((width/2, height/2), 45, 1)
image_rotate = cv2.warpAffine(image, matrix, (width, height))
# 색상변환
image_gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

cv2.imshow('imagewindow1', image)
# cv2.imshow('imagewindow2', image_flip)
# cv2.imshow('imagewindow3', image_flip2)
cv2.imshow('imagewindow2', image_rotate)
cv2.imshow('imagewindow3', image_gray)
cv2.waitKey(0)
cv2.destroyAllWindows()

