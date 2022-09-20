#include <stdio.h>
/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	int i;
	long int num;

	num = 612852475143;
	i = 1;
	while (num > 1)
	{
		if (num % 2 == 0)
		{
			num = num / 2;
			if (num == 1)
			{
				printf("2\n");
			}
		}
		else
		{
			while (i <= num)
			{
				i = i + 2;
				if (num % i == 0)
				{
					num = num / i;
				}
				if (num == 1)
				{
					printf("%d\n", i);
				}
			}
		}
	}
	return (0);
}
