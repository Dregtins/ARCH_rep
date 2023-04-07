#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class Camera {
private:
    VideoCapture cap;
    Mat
};

int main() {
    Mat image;
    
    namedWindow("Display window");
    
    VideoCapture cap(0);
    
    if (!cap.isOpened()) {
        cout << "can't open camera";
    }
    
    while (true) {
        cap >> image;
        img_hsv = cvtColor(image, COLOR_BGR2HSV);
        image = inRange(img_hsv, (0,50,20), (5,255,255));
        imshow("Display window", image);
        waitKey(25);
        char c = (char)waitKey(25);
        if (c == 27) break;
    }
    return 0;
}
