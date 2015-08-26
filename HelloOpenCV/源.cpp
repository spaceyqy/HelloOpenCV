#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char **argv)
{
	Mat img = imread("360buy.jpg");
	if (img.empty())
	{
		cout << "��ͼ��ʧ�ܣ�" << endl;
		return -1;
	}
	namedWindow("image",WINDOW_AUTOSIZE);
	imshow("image", img);
	waitKey();

	return 0;
} 