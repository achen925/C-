#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 写一个函数，可以逆序一个字符串。
void Reverse(char str[],int sz)
{
	char *p1 = &str[0];
	char *p2 = &str[sz - 2];
	while (p1 < p2)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2--;
	}
}
int main()
{
	char str[] = "hello bit";
	//在这里完成下面函数，参数自己设计，要求：使用指针
	int sz = sizeof(str) / sizeof(str[0]);
	Reverse(str,sz);
	printf("%s\n", str);
	return 0;
}
