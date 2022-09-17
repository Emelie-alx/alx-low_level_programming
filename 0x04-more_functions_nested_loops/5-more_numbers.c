#include "main.h"
/**
  * more_numbers - Print numbers 0 to 14
  */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 1 && !(j > 4))
			{
				_putchar('1');
			}
			if ((i == 1 && !(j > 4)) || (i < 1))
			{
				_putchar('0' + j);
			}
		}
	}
	_putchar('\n');
}
