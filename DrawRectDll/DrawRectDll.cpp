#pragma once

#include <highgui.h>
#include <opencv2\core.hpp>
#include <iostream>
using namespace std;

__declspec (dllexport) bool DrawRect(int x, int y,int w,int h,char* Image_path)
{
	
	IplImage *img = cvLoadImage(Image_path, 1);
	//����ָ��ͼƬΪ��ָ��
	if (img->imageData == 0)
	{
		cout << "��ָͼƬ·��������"<<endl;
		return false;
	}
	if (img->width<x+w||img->height<y+h)
	{
		cout << "����ľ������ݣ�x,y,w,h������ȷ" << endl;
		return false;
	}
	cvNamedWindow(Image_path, 1);
	
	uchar *ptr = (uchar *)img->imageData;
	uchar *ptr1 = (uchar *)img->imageData + y*img->widthStep;
	uchar *ptr2 = (uchar *)img->imageData + (y + h)*img->widthStep;
	//�����ε��������н��з�ɫ
	for (int i = x*3; i < (w+x)*3; i++) 
	{
		ptr1[i] = 0;
		ptr2[i] = 0;
	}
	//�����ε��������н��з�ɫ
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
	cvReleaseImage(&img);//�ͷ�ͼƬ��Դ
	cvDestroyWindow(Image_path);//�ͷŴ�����Դ
	//ִ����ϣ�����true
	return true;
}