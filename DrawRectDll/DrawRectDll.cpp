#pragma once

#include <highgui.h>
#include <opencv2\core.hpp>
#include <iostream>
using namespace std;

__declspec (dllexport) bool DrawRect(int x, int y,int w,int h,char* Image_path)
{
	
	IplImage *img = cvLoadImage(Image_path, 1);
	//若所指的图片为空指针
	if (img->imageData == 0)
	{
		cout << "所指图片路径无数据"<<endl;
		return false;
	}
	if (img->width<x+w||img->height<y+h)
	{
		cout << "传入的矩形数据（x,y,w,h）不正确" << endl;
		return false;
	}
	cvNamedWindow(Image_path, 1);
	
	uchar *ptr = (uchar *)img->imageData;
	uchar *ptr1 = (uchar *)img->imageData + y*img->widthStep;
	uchar *ptr2 = (uchar *)img->imageData + (y + h)*img->widthStep;
	//将矩形的上下两行进行反色
	for (int i = x*3; i < (w+x)*3; i++) 
	{
		ptr1[i] = 0;
		ptr2[i] = 0;
	}
	//将矩形的左右两列进行反色
	for (int i = y+1; i < h+y-1; i++)
	{
		(ptr + img->widthStep*i)[x*3] = 0;
		(ptr + (img->widthStep*i))[x*3+1] = 0;
		(ptr + (img->widthStep*i))[x*3+2] =0 ;
		(ptr + img->widthStep*i)[(x+w)*3] = 0 ;
		(ptr + (img->widthStep*i ))[(x+w)*3 + 1] = 0;
		(ptr + (img->widthStep*i ))[(x + w)*3+2] = 0;
	}

	cvShowImage(Image_path, img);
	cvWaitKey(0);
	cvReleaseImage(&img);//释放图片资源
	cvDestroyWindow(Image_path);//释放窗体资源
	//执行完毕，返回true
	return true;
}