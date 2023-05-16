#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import cv2

class WebcamNode(Node):
    def __init__(self):
        super().__init__('webcam_node')
        self.publisher_ = self.create_publisher(Image, 'webcam_image', 10)
        self.timer_ = self.create_timer(0.1, self.timer_callback)

    def timer_callback(self):
        cap = cv2.VideoCapture(0)
        ret, frame = cap.read()
        if ret:
            img_msg = Image()
            img_msg.header.frame_id = 'webcam'
            img_msg.height = frame.shape[0]
            img_msg.width = frame.shape[1]
            img_msg.encoding = 'bgr8'
            img_msg.data = frame.tobytes()
            self.publisher_.publish(img_msg)

def main(args=None):
    rclpy.init(args=args)
    node = WebcamNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
