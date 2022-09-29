#include "main.h"
/**
  * puts2 - Prints every other char and first char of a string
  * @str: Input string
  */
void puts2(char *str)
{
	int i, j, k;

	for (i = 0; *(str + i) != 0; i++)
	{
		continue;
	}
	for (j = 0; j < i; j++)
	{
		k = *(str + j);
		if (j == 0)
		{
			_putchar(k);
		}
		else if (j > 0 && j % 2 == 0)
		{
			_putchar(k);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
