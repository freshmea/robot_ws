import RPi.GPIO as g
import time

servo_pin = 12



g.setmode(g.BCM)
# g.setup(26, g.OUT)
g.setup(servo_pin, g.OUT)

pwm = g.PWM(servo_pin, 50)
pwm.start(3.0)

pwm.ChangeDutyCycle(0.0)

for i in range(30):
  pwm.ChangeDutyCycle(3.0)
  time.sleep(0.5)
  pwm.ChangeDutyCycle(3.0)
  time.sleep(0.5)
  pwm.ChangeDutyCycle(7.5)
  time.sleep(0.5)
  pwm.ChangeDutyCycle(9.5)
  time.sleep(0.5)
  pwm.ChangeDutyCycle(12.5)
  time.sleep(0.5)
  pwm.ChangeDutyCycle(9.5)
  time.sleep(0.5)



pwm.stop()
g.cleanup()
