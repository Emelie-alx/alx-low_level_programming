#include "main.h"
/**
  * _strncat - Concatenate two strings
  * @dest: First input string
  * @src: Second input string
  * @n: Max number of src string to be joined to dest string
  * Return: Pointer to dest resulting from joined src
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;
	static char *p;

	while (*(dest + i) != 0)
	{
		i++;
	}
	while (*(src + j) != 0)
	{
		j++;
	}
	while (k < n)
	{
		*(dest + i) = *(src + k);
		k++;
		i++;
	}
	if (j == n || j < n)
	{
		*(dest + i) = '\0';
	}
	p = dest;
	return (p);
}
