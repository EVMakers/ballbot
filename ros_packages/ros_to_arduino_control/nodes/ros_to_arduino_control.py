#!/usr/bin/env python

import roslib; roslib.load_manifest('ros_to_arduino_control') #our package is named ros_to_arduino_control
import rospy
import serial
import math
from geometry_msgs.msg import Twist #Twist type message is the output from navigation stack
from  robot import *


robot = Robot()  #I am not sure where to place this


def callback(nav_velocity_msg): #this function is called when the listener catches a message
   
    vx = nav_velocity_msg.linear.x #assumed to be in cm/s
    vy = nav_velocity_msg.linear.y #assumed to be in cm/s

    drive_speed = ((vx**2)+(vy**2))**2  #drive_speed is in cm/s
    steer_angle = math.degrees(math.atan(vy/vx)) # steer_angle is in degrees
    
    robot.set_steering(steer_angle)
    robot.set_velocity(drive_speed)
    robot.send_arduino_packet()


def rosnav_listener():
    rospy.init_node('rosnav_listener',anonymous=False)
    rospy.Subscriber("cmd_vel", Twist, callback)
    rospy.spin()

if __name__ == '__main__':
    rosnav_listener()

