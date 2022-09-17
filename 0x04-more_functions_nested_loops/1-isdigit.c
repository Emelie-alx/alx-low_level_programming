#include "main.h"
/**
  * _isdigit - Determine if an input is a digit or not
  * @c: input to be evaluated
  * Return: 1 on success and 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= '0' && !(c > '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
