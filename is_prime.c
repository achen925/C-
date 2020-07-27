#include <stdio.h>
#include <math.h>
void is_prime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i%j == 0)
		{
			break;
		}
	}
	if (j > sqrt(i))
	{
		printf("%d是素数\n", i);
	}
	
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		is_prime(i);
	}
	return 0;
}
