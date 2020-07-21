# define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

int get_max(int x, int y)
{
	int z = 0;
	if (x < y)
		z = y;
	else
		z = x;
	return z;

}

int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = get_max(num1, num2);
	printf("%d\n", max);
	return 0;
}
