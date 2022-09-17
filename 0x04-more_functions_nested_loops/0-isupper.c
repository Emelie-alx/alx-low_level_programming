#include "main.h"
/**
  * _isupper - Checks for uppercase characters from input
  * @c: input to be checked
  * Return: 1 on success and 0 on faliure
  */
int _isupper(int c)
{
	if (c >= 'A' && !(c > 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
