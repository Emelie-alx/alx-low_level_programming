#include "main.h"
/**
  * _puts - Prints string to screen
  * @str: String to be printed
  */
void _puts(char *str)
{
	int i = 0, j;

	while (*(str + i) != 0)
	{
		j = *(str + i);
		_putchar(j);
		i++;
	}
	_putchar('\n');
}
