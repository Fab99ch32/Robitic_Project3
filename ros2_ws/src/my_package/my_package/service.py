import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2


class ImagePublisher(Node):

    def __init__(self):
        super().__init__('image_publisher')

        # Erstellen Sie einen Bild-Publisher, der das Topic "/webcam/image_raw" veröffentlicht
        self.publisher = self.create_publisher(Image, '/webcam/image_raw', 10)

        # Initialisieren Sie die OpenCV-Webcam-Video-Capture
        self.capture = cv2.VideoCapture(0)

        # Konvertieren Sie das OpenCV-Format in ROS-Bildformat
        self.bridge = CvBridge()

        # Veröffentlichen Sie kontinuierlich Bilder
        self.timer = self.create_timer(0.1, self.publish_frame)

    def publish_frame(self):
        # Erfassen Sie ein Frame von der Webcam
        ret, frame = self.capture.read()

        if ret:
            # Konvertieren Sie das OpenCV-Frame in ROS-Bild
            ros_image = self.bridge.cv2_to_imgmsg(frame, encoding='bgr8')

            # Veröffentlichen Sie das ROS-Bild
            self.publisher.publish(ros_image)

def main():
    rclpy.init()

    image_publisher = ImagePublisher()

    rclpy.spin(image_publisher)

    # Beenden Sie die ROS2-Node
    image_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

