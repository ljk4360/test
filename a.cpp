#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main(void)
{
	//播放视频
	//读入视频
	VideoCapture capture("a.mp4");
	while (1)
	{
		Mat frame;
		capture >> frame;//读取当前帧
		if (frame.empty())
		{
			break;
		}
		imshow("readvideo", frame);//显示当前帧
		waitKey(30);//延时30ms
	}
	return 0;
}
