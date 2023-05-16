#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class ImageSubscriber(Node):

    def __init__(self):
        super().__init__('image_subscriber')
        self.subscription = self.create_subscription(
            Image,
            'image_topic',
            self.process_image,
            10)
        self.bridge = CvBridge()

    def process_image(self, msg):
        
        # konvertiert das ROS-Bild in ein OpenCV
        image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        
        # Grauwertbild erzeugen
        gray_image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        
        # Bild glätten
        blur_image = cv2.GaussianBlur(gray_image, (5, 5), 0)
        
        # Kanten mit dem Canny-Operator erkennen
        edges_image = cv2.Canny(blur_image, 100, 200)
        
        # Bildsegmentierung durchführen
        contours, hierarchy = cv2.findContours(edges_image, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        
        # Merkmale extrahieren ; es geht hier nur um Fläschen und Umfänge der Konturen 
        for cnt in contours:
            area = cv2.contourArea(cnt)
            perimeter = cv2.arcLength(cnt, True)
            print("Area:", area)
            print("Perimeter:", perimeter)

def main(args=None):
    rclpy.init(args=args)

    image_subscriber = ImageSubscriber()

    rclpy.spin(image_subscriber)

    image_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
