#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{	
	int a = 10;
	int* p = & a;
	printf("%d\n", &a);
	printf("%d\n", p);
	*p = 20;
	printf("%d\n", a);
	return 0;
}
