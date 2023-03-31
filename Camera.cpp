#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat image;
    
    namedWindow("Display window");
    
    VideoCapture cap(0);
    
    if (!cap.isOpened()) {
        cout << "can't open camera";
    }
    
    while (true) {
        cap >> image;
        imshow("Display window", image);
        waitKey(25);
    }
    return 0;
}
