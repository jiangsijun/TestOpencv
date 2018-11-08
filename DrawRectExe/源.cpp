#pragma comment(lib,"DrawRectDll.lib")
__declspec(dllimport) bool DrawRect(int x, int y, int w, int h, char* Image_path);

#include <iostream>
using namespace std;
int main()
{
	int x;
	int y;
	int w;
	int h;
	char image[120];
	bool isPic;
	//while (true) {
		std::cout << "请输入图片路径:";
		std::cin.getline(image, 256);
		std::cout << "请输入图片x数值:";
		std::cin >> x;
		std::cout << endl << "请输入图片y数值:";
		std::cin >> y;
		std::cout << endl << "请输入图片w数值:";
		std::cin >> w;
		std::cout << endl << "请输入图片h数值:";
		std::cin >> h;
		//std::cout << x << y << w << h << image;
		isPic= DrawRect(x, y, w, h, image);
		
		if (isPic)
		{
			std::cout << "true";
		}
		else
		{
			std::cout << "图片或数值有问题";
		}
		
	/*}*/
}