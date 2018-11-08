#include "Header.h"
//#include "Compress.h"
//#include "Decompress.h"

int main()
{
	int count;		//保存有多少个分片
	IplImage *img = cvLoadImage("C:/Users/YCKJ1138/Desktop/1.jpg", 0);	//用灰度值的方法读取图片
	cout << img->nChannels;
}