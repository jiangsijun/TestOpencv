#include "Compress.h"



CCompress::CCompress()
{
}

CCompress::CCompress(IplImage *img,double threshold)
{

	//this->threshold = threshold;
	//height = img->height;
	//width = img->width;
	//*dst = new (uchar*)[height];	//ΪdstĿ���ά�����ʼ����ָ��һά�����ָ��
	//dst = new (uchar **)[width];	//ΪdstĿ���ά�����ʼ����ָ��ÿ�����ݵ�ָ��
	//uchar *ptr;
	////��img�е�ͨ��ֵȡ��������������
	//for (int i = 0; i < img->height; i++)
	//{
	//	ptr = (uchar *)(img->imageData + i*img->widthStep);	
	//	for (int j = 0; j < img->width; j++)
	//	{
	//		dst[i][j] = ptr[j];							
	//	}
	//}
}


CCompress::~CCompress()
{
}
