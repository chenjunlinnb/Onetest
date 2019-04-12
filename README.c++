#Onetests
#include<iostream>
#include<windows.h>
#include <conio.h>
using namespace std;
int main() 
{
	int i, j;
	int x=10, y=20;//初始化的坐标
	char input;
	int isFire = 0;
	int ny=10;
	int isKill = 0;
	while (1)
	{
		
		system("cls");
		/*
		for(i=0;i<x;i++)
			cout<<"\n";
		for(j=0;j<y;j++)
			cout<<" ";
		*/
		if (isKill == 0)//判断是否击中
		{
			for (j = 0; j < ny; j++)
				cout << " ";
			cout << "+" << endl;//输出靶子
		}

		if (isFire == 0)//判断是否开火
		{
			for (i = 0; i<x; i++)
				cout << "\n";
			for (j = 0; j<y; j++)
				cout << " ";        //飞机生成的位置
		}
		else
		{
			for (i = 0; i < x; i++)
			{
				for (j = 0; j < y; j++)
					cout << " ";
				cout << "  |\n"; //输出子弹
				isFire = 0;
				if (ny == y + 2)
					//isKill=1;
				    ny = rand() % 100;//被击杀

			}
			for (j = 0; j < y; j++)
				cout << " ";
		}
		cout << "  *" << endl;
		for (j = 0; j < y; j++)
			cout << " ";
		cout << "*****" << endl;
		for (j = 0; j < y; j++)
			cout << " ";
		cout << " * *";//输出飞机

		input = _getch();
		if (input == 'w') //上
			x--;
		if (input == 's')//下
			x++;
		if (input == 'a')//左
			y--;
		if (input == 'd')//右
			y++;
		if (input == ' ')//开火
			isFire = 1;
	}                  //操作飞机

	system("pause");
	return 0;
}
