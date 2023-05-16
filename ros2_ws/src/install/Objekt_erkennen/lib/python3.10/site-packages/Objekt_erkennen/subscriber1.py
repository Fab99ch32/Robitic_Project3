import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Image
import cv2
import numpy as np


class ImageSubscriber(Node):
    def __init__(self):
        super().__init__('image_subscriber')
        self.subscription = self.create_subscription(Image, '/camera/image_raw', self.listener_callback, 10)
        self.subscription

        self.cv_bridge = CvBridge()

    def listener_callback(self, data):
        try:
            # Konvertieren Sie das ROS-Bild in ein OpenCV-Bild
            cv_image = self.cv_bridge.imgmsg_to_cv2(data, desired_encoding='bgr8')
        except CvBridgeError as e:
            print(e)
        
        # Konvertieren Sie das Bild in ein Graustufenbild
        gray_image = cv2.cvtColor(cv_image, cv2.COLOR_BGR2GRAY)

        # Wende den Canny-Operator auf das Graustufenbild an
        edges = cv2.Canny(gray_image, 100, 200)

        # Finden Sie die Konturen des Bildes
        contours, hierarchy = cv2.findContours(edges, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)

        # Schleife durch die Konturen und zeichnen Sie Rechtecke um sie herum
        for cnt in contours:
            x, y, w, h = cv2.boundingRect(cnt)
            cv2.rectangle(cv_image, (x, y), (x+w, y+h), (0, 255, 0), 2)

        # Zeige das Ergebnisbild
        cv2.imshow('Image', cv_image)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init()
    image_subscriber = ImageSubscriber()
    rclpy.spin(image_subscriber)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
