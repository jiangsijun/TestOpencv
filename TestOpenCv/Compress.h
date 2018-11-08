#pragma once
#include "Header.h"
class CCompress
{
public:
	CCompress();
	CCompress(IplImage *img,double threshold); //初始化
	virtual ~CCompress();
protected:
	bool getThreshold(int x1, int y1, int x2, int y2); //获取某个方块的平均值，判断是否超过阈值，若超过，则记为true，否则记false
	bool getCopmress(SSaveImage *dst); //循环整个数组，直到遍历整个数组，遍历完后返true,遍历过的块返-1
	
private :
	SSaveImage *header;
	uchar **dst;
	int width;
	int height;
	double threshold;
	double average;
};

