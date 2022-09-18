#include "main.h"
/**
  * print_diagonal - print diaginal line
  * @n: lenght of diagonal line to be printed
  */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else if (i > 1)
		{
			for (j = 1; j < i; ++j)
			{
				_putchar(' ');
			}
				_putchar('\\');
				_putchar('\n');
		}
	}
}
