#include <iostream>
#include <fstream>
#include <opencv2/opencv.hpp> 
#include "opencv2/highgui/highgui.hpp"
using namespace cv;
using namespace std;

int main() {
	Mat img = imread("lena.jpg", 1);
	cvtColor(img, img, CV_BGR2GRAY);

	ofstream outFile;
	outFile.open("inputimage.h");

	int i = 0;
	outFile << "#define WIDTH " << img.cols << endl;
	outFile << "#define HEIGHT " << img.rows << endl;

	outFile << "unsigned char InImg[" << "WIDTH" << "*" << "HEIGHT" << "] = {";
	while (i < (img.cols * img.rows))
	{
		outFile<<(unsigned int)img.data[i] << ",";
		++i;
	}

	outFile << "};";
	outFile.close();
	return 0;
}