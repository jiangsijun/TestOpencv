#include "Decompress.h"



CDecompress::CDecompress()
{
}

CDecompress::CDecompress(int count, SSaveImage *header)
{
	this->count = count;
	this->header = header;
}

CDecompress::~CDecompress()
{
}
