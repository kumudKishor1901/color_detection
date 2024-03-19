#include <iostream>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>


using namespace std;
using namespace cv;

//***********Color Detection************

Mat imgHsv, mask;
int hmin=0, hmax=20, smin=110, smax=255, vmin=155, vmax=255;

void main() {
	string path = "Resources/lambo.png";
	Mat img = imread(path);

	cvtColor(img, imgHsv, COLOR_BGR2HSV);
	
	// create trackbars to find out the HSV values;
	namedWindow("Trackbars", (640, 200));
	createTrackbar("Hue Min", "Trackbars", &hmin, 179);
	createTrackbar("Hue Max", "Trackbars", &hmax, 179);
	createTrackbar("Sat Max", "Trackbars", &smin, 255);
	createTrackbar("Sat Min", "Trackbars", &smax, 255);
	createTrackbar("Value Min", "Trackbars", &vmin, 255);
	createTrackbar("Value Max", "Trackbars", &vmax, 255);
	
	while(true) {
		Scalar lower(hmin, smin, vmin);
		Scalar upper(hmax, smax, vmax);
		inRange(imgHsv, lower, upper, mask);
		imshow("img", img);
		imshow("imgHsv", imgHsv);
		imshow("trackbars", mask);

		waitKey(1);
	}

	

}