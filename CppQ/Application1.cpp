#include <iostream>

using namespace std;

void Application1(int dw, int fw)
{
	static int a1dw = dw;
	static int a1fw = fw;
	printf("Application1, a1dw=%d, a1fw=%d", a1dw, a1fw);
}