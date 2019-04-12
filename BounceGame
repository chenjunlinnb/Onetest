#include<iostream>
#include<windows.h>
using namespace std;
int main() 
{
	int i, j;
	int x=0;
	int y=0;//球坐标

	int x_v=1;
	int y_v = 1;//球速，球的位置变化

	int top = 0;
	int bottom = 20;
	int left = 0;
	int rigth = 5;//边界
	while(1)
	{  
	 system("cls");
	 x = x + x_v;//球的位置：原位置+速度
	 y = y + y_v;
	 for(i=0;i<x;i++)	
		cout << "\n"; //球在x轴，垂直方向移动
	 for (j = 0; j <y; j++)
		cout << " ";  //球在y轴, 水平方向移动
		cout << "0";  
	if (x == left || x == rigth)
		x_v = -1 * x_v;
	if (y == top || y == bottom)
		y_v = -1 * y_v;//当碰到边界时反向
		Sleep(50);//睡50秒
	}
	    cout << "\a";
	system("pause");
	return 0;
}
