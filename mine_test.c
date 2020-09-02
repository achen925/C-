#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("****************************\n");
	printf("*******  1、play  **********\n");
	printf("*******  0、exit  **********\n");
	printf("****************************\n");
}

void game()
{
	//mine数组存放布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//show数组存放排查出的雷的信息
	char show[ROW][COL] = { 0 };
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROW, COL, '*');
	//打印棋盘
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//扫雷
	FindMine(mine, show, ROW, COL);

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch(input)
		{
            case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误，请重新输入\n");
				break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
