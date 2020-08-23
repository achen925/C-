#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu()
{
	printf("************************************\n");
	printf("***********   1、Add   *************\n");
	printf("***********   2、Del   *************\n");
	printf("*********** 3、Modify  *************\n");
	printf("*********** 4、Search  *************\n");
	printf("***********  5、Show   *************\n");
	printf("***********  6、Sort   *************\n");
	printf("***********  0、exit   *************\n");
	printf("************************************\n");
}

int main()
{
	struct Contact con;//创建一个结构体变量con,存放通讯录信息
	InitContact(&con); //初始化通讯录
	int input = 0;
	do 
	{
		menu();
		printf("请选择->\n");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Modify:
			ModifyContact(&con);
			break;
		case Search:
			SearchContact(&con);
			break;
		case Show:
			ShowContact(&con);
			6;
		case Sort:
			SortContact(&con);
			break;
		case exit:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);

	return 0;
}
