#include "main.h"
/**
  * print_last_digit - Print last digit of input
  * @c: intput to be analysed
  *
  * Return: Last digit of input
  */
int print_last_digit(int c)
{
	int i, k;

	i = c % 10;
	k = i * -1;
	if (i >= 0)
	{
		_putchar('0' + i);
		return (i);
	}
	else
	{
		_putchar('0' + k);
		return (i * -1);
	}
}
