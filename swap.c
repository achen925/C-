#include <stdio.h>
void swap(int *pa,int *pb)
{
	int tmp = *pb;
	*pb = *pa;
	*pa = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数:->\n");
	scanf("%d%d", &a, &b);
	printf("交换前两个整数为:a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("交换后两个整数为:a=%d,b=%d\n", a, b);
	return 0;
}
