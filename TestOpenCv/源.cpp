#include "Header.h"
//#include "Compress.h"
//#include "Decompress.h"

int main()
{
	int count;		//�����ж��ٸ���Ƭ
	IplImage *img = cvLoadImage("C:/Users/YCKJ1138/Desktop/1.jpg", 0);	//�ûҶ�ֵ�ķ�����ȡͼƬ
	cout << img->nChannels;
}