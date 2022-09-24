#include "main.h"
/**
  * print_rev - Print a string in reverse
  * @s: Stringto be printed in reverse
  */
void print_rev(char *s)
{
	int i = 0, j = 0, k;

	while (*(s + j) != 0)
	{
		i++;
		j++;
	}
	i = i - 1;
	while (i >= 0)
	{
		k = *(s + i);
		_putchar(k);
		i--;
	}
	_putchar('\n');
}
