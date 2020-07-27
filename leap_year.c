#include <stdio.h>
void is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
	  printf("%d是闰年\n",year);
	}

}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		is_leap_year(year);
	}
	return 0;
}
