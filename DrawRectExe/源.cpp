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
		std::cout << "������ͼƬ·��:";
		std::cin.getline(image, 256);
		std::cout << "������ͼƬx��ֵ:";
		std::cin >> x;
		std::cout << endl << "������ͼƬy��ֵ:";
		std::cin >> y;
		std::cout << endl << "������ͼƬw��ֵ:";
		std::cin >> w;
		std::cout << endl << "������ͼƬh��ֵ:";
		std::cin >> h;
		//std::cout << x << y << w << h << image;
		isPic= DrawRect(x, y, w, h, image);
		
		if (isPic)
		{
			std::cout << "true";
		}
		else
		{
			std::cout << "ͼƬ����ֵ������";
		}
		
	/*}*/
}