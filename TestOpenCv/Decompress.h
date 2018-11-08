#pragma once
#include "Header.h"
class CDecompress
{
public:
	CDecompress();
	CDecompress(int count,SSaveImage *header);
	virtual ~CDecompress();
	bool EndDecompress(IplImage *dst);
private:
	int count;
	SSaveImage *header;
	IplImage *dst;
};

