#include "main.h"
/**
 * _isalpha - checks if input is an alphabet
 * @c: Input to be analysed
 * Return: 1 on success and 0 failure
 */
int _isalpha(int c)
{
	if ((c >= 'A' && !(c > 'Z')) || (c >= 'a' && !(c > 'z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
