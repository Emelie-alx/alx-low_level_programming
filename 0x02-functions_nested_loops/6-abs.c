#include "main.h"
/**
  * _abs - Print absolute value of numbers
  * @c: Input to be analysed
  *
  * Return: Only positive numbers
  */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
