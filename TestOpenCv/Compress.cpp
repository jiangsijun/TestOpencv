#include "Compress.h"



CCompress::CCompress()
{
}

CCompress::CCompress(IplImage *img,double threshold)
{

	//this->threshold = threshold;
	//height = img->height;
	//width = img->width;
	//*dst = new (uchar*)[height];	//为dst目标二维数组初始化，指向一维数组的指针
	//dst = new (uchar **)[width];	//为dst目标二维数组初始化，指向每个数据的指针
	//uchar *ptr;
	////将img中的通道值取出，存入数组中
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
