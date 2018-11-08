#pragma once
#include "Header.h"
class CCompress
{
public:
	CCompress();
	CCompress(IplImage *img,double threshold); //��ʼ��
	virtual ~CCompress();
protected:
	bool getThreshold(int x1, int y1, int x2, int y2); //��ȡĳ�������ƽ��ֵ���ж��Ƿ񳬹���ֵ�������������Ϊtrue�������false
	bool getCopmress(SSaveImage *dst); //ѭ���������飬ֱ�������������飬�������true,�������Ŀ鷵-1
	
private :
	SSaveImage *header;
	uchar **dst;
	int width;
	int height;
	double threshold;
	double average;
};

