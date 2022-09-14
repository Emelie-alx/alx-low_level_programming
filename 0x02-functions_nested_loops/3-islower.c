#include "main.h"
/**
 * _islower - Checks if an input is lowercaps
 * @c: The input to be analused
 *
 * Return: 1 on sucess
 * and return 0 failure
 */
int _islower(int c)
{
	if (c >= 'a' && !(c > 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
