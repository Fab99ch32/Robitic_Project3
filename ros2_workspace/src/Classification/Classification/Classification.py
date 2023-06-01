#!/usr/bin/env python3
import cv2
import numpy as np
import os
import pandas as pd
from sklearn import svm
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from std_msgs.msg import Byte
 
class ObjectClassification(Node):
    def __init__(self):
        super().__init__('ObjektKlassification')
        self.subscription = self.create_subscription(Image, 'Samples', self.image_callback, 10)
        self.publisher = self.create_publisher(Byte, 'classification_result', 10)
        self.bridge = CvBridge()

        train_file_path = 'src/ro45_simple_robot_controller/ro45_simple_robot_controller/Train_daten.xlsx'
        X_train, y_train = load_train_data(train_file_path)
        self.svm_model =train_svm(X_train, y_train)

    def image_callback(self, Image):
        cv_image = self.bridge.imgmsg_to_cv2(Image, desired_encoding='bgr8')
        features =feature_extract(cv_image)
        result =pred(features, self.svm_model)
        self.publisher.publish(result)
        
def main(args=None):
    rclpy.init(args=args)
    objekt_klassification = ObjectClassification()
    rclpy.spin(objekt_klassification)
    objekt_klassification.destroy_node()
    rclpy.shutdown()
        
if __name__ == '__main__':
    main()
    
def center_of_gravity(img):
    """
    Calculates the centroid of a binary image.

    Parameters:
        img (ndarray): Binary image.

    Returns:
        np.ndarray: Centroid coordinates (y, x).

    """
    yind,xind=np.where(img)
    
    return np.array( (np.mean(yind), np.mean(xind)))


def inertia_tensor(binary_img):
    """
    Calculates the inertia tensor of a binary image.

    Parameters:
        binary_img (ndarray): Binary image.

    Returns:
        np.ndarray: Inertia tensor matrix.

    """
    gravity_y,gravity_x = center_of_gravity(binary_img)
    matrix_inertia_tensor = np.zeros((2,2))
    y,x = np.where(binary_img)
    y = y-gravity_y
    x = x-gravity_x
    number_of_pixel = float(len(y))
    matrix_inertia_tensor[0,0] = np.sum(y**2) / number_of_pixel
    matrix_inertia_tensor[1,1] = np.sum(x**2) / number_of_pixel
    matrix_inertia_tensor[0,1] = -np.sum(x*y) / number_of_pixel
    matrix_inertia_tensor[1,0] = matrix_inertia_tensor[0,1] 
    return matrix_inertia_tensor
  
   
def Hauptmoment(e_vals):
    """
    Calculates the principal moments based on the eigenvalues.

    Parameters:
        e_vals (ndarray): Eigenvalues.

    Returns:
        I_x (float): Principal moment along the x-axis.
        I_y (float): Principal moment along the y-axis.

    """
    major_eigenvalue_idx = np.argmax(e_vals)
    minor_eigenvalue_idx = np.argmin(e_vals)
    major_eigenvalue = e_vals[major_eigenvalue_idx]
    minor_eigenvalue = e_vals[minor_eigenvalue_idx]
    I_x = major_eigenvalue 
    I_y = minor_eigenvalue 
    return I_x , I_y


def feature_extract(image):
    """
    Classifies an image as a cat or unicorn.

    Parameters:
        image (str): Path to the image.

    Returns:
        features (list): List of extracted features of the image.

    """
    bild = cv2.imread(image)
    binary_img=cv2.imread(image, cv2.IMREAD_GRAYSCALE)
    gray = cv2.cvtColor(bild, cv2.COLOR_BGR2GRAY)  
    _,binary_img=cv2.threshold(binary_img, 0, 1, cv2.THRESH_BINARY_INV + cv2.THRESH_OTSU)
    blur = cv2.GaussianBlur(gray, (5, 5), 0)
    edges = cv2.Canny(blur, 300, 525)
    num_edges = cv2.countNonZero(edges)
    dst = cv2.cornerHarris(gray, 2, 3, 0.04)
    threshold = 0.02 * dst.max()
    corners = []
    for i in range(dst.shape[0]):
        for j in range(dst.shape[1]):
            if dst[i, j] > threshold:
                corners.append((i, j))
    gravity_y,gravity_x = center_of_gravity(binary_img)
    cv2.circle(edges, (int(gravity_x + 0.5), int(gravity_y + 0.5)), 5, (0,0,255), -1)  
    e_vals, _= np.linalg.eig( inertia_tensor(binary_img) )  
    I_x, I_y = Hauptmoment(e_vals)  
    cv2.imshow('Einhorn', edges)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
    features = [num_edges, I_x, I_y, len(corners)]
    return features


def pred(features,model):
    """
    Performs a prediction using the SVM model and prints the result.

    Parameters:
        features (list): List of image features.
        model: SVM model.

    Returns:
        int: Prediction class (0 for cat, 1 for unicorn).
        
    """
    print()
    prediction = model.predict([features])
    if prediction == 1 : 
        print("Einhorn")
    elif prediction == 0 :
        print("Katze")
    else :
        print("-1")
    return prediction

def load_train_data(file_path):
    """
    Loads training data from an Excel file.

    Parameters:
        file_path (str): Path to the Excel file.

    Returns:
        X (ndarray): Input data.
        y (ndarray): Target variables.

    """
    data = pd.read_excel(file_path)
    x = data[[' Anzahl kanten', 'Trägheitsmoment_x', 'Trägheitsmoment_y', 'Anzahl Ecke']].values
    class_mapping = {'Katze': 0, 'Einhorn': 1}
    y = data['Klasse'].map(class_mapping).values
    return x, y
    
def train_svm(X_train, y_train):
    """
    Trains an SVM model using the training data.

    Parameters:
        X_train (ndarray): Input data.
        y_train (ndarray): Target variables.

    Returns:
        clf: Trained SVM model.

    """
    clf = svm.SVC(kernel='linear')
    clf.fit(X_train, y_train)
    return clf
