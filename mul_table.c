#include <stdio.h>
void mul(int input)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= input; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int input = 0;
	printf("请输入乘法口诀表的行数:->\n");
	scanf("%d", &input);
	mul(input);
	return 0;
}
