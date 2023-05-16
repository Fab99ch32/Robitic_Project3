import cv2
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge


class ImagePublisher(Node):
    def __init__(self):
        super().__init__('image_publisher')

        # Abonnieren des Bildes vom Kameranoden-Topic
        self.image_sub = self.create_subscription(Image, '/camera/image_raw', self.callback, 10)

        # Veröffentlichen eines Bildes als Testnachricht
        self.image_pub = self.create_publisher(Image, '/processed_image', 10)
        self.cv_bridge = CvBridge()

        # Laden eines Beispielbildes aus einer Datei
        self.image = cv2.imread('h.jpg')

    def callback(self):
        self.image = cv2.cvtColor(self.image, cv2.COLOR_RGB2BGR)
        try:
            # Konvertieren des ROS-Bilds in ein OpenCV-Bild
            cv_image = self.cv_bridge.imgmsg_to_cv2(self.image, desired_encoding='bgr8')
        except CvBridgeError as e:
            print(e)

        # Veröffentiche das Beispielbild als eine ROS-Nachricht
        self.image_pub.publish(self.cv_bridge.cv2_to_imgmsg(self.image, encoding='passthrough'))

def main(args = None):
    rclpy.init()
    image_publisher = ImagePublisher()
    rclpy.spin(image_publisher)
    rclpy.shutdown()

if __name__ == '__main__':
    main()