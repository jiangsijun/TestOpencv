#pragma once
#include <highgui.h>
#include <opencv2\core.hpp>
#include <iostream>
using namespace std;

//´æ´¢Ñ¹ËõºóÍ¼Æ¬µÄÁ´±í
struct SSaveImage
{
	int x;
	int y;
	int width;
	int height;
	double average;
	int colorX1;
	int colorY1;
	int colorX2;
	int colorY2;
	SSaveImage *next;
};

