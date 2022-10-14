#include "main.h"
/**
  * print_number - Print an integer
  * @n: Integer to be printed
  */
void print_number(int n)
{
	int temp, div;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	div = 1;
	temp = n;
	for (; temp > 9; temp /= 10)
	{
		div *= 10;
	}
	for (; div >= 1; div /= 10)
	{
		_putchar(((n / div) % 10) + '0');
	}
}
