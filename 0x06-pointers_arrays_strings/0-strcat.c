#include "main.h"
/**
  * _strcat - Concatenates two strings
  * @dest: First string
  * @src: Second string
  * Return: Merged string one and 2
  */
char *_strcat(char *dest, char *src)
{
	static char *a;
	int i = 0, j = 0;

	while (*(dest + i) != 0)
	{
		i++;
	}
	while (*(src + j) != 0)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	a = dest;
	return (a);
}
