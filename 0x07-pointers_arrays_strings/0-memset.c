#include "main.h"
/**
  * _memset - Fills memory of a string with constant byte
  * @s: Pointer to the array to be modified
  * @b: The constant byte
  * @n: Number of byte to be replaced in s
  * Return: Modified s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
