import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2


class ImageSubscriber(Node):

    def __init__(self):
        super().__init__('image_subscriber')

        # Erstellen Sie einen Bild-Abonnenten, der das Topic "/webcam/image_raw" abonniert
        self.subscription = self.create_subscription(
            Image,
            '/webcam/image_raw',
            self.image_callback,
            10
        )
        self.subscription  # damit es nicht im Unassigned-Fehler endet

        # Konvertieren Sie das ROS-Bildformat in OpenCV-Format
        self.bridge = CvBridge()

    def image_callback(self, msg):
        # Konvertieren Sie das ROS-Bild in OpenCV-Format
        cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        # Zeigen Sie das Bild in einem Fenster an
        cv2.imshow("Webcam Feed", cv_image)
        cv2.waitKey(1)

def main():
    rclpy.init()

    image_subscriber = ImageSubscriber()

    rclpy.spin(image_subscriber)

    # Beenden Sie die ROS2-Node
    image_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

