#include "main.h"
/**
  * _strlen - Print the length of string
  * @s: Pointer to string
  * Return: Length of string
  */
int _strlen(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(s + j) != 0)
	{
		i++;
		j++;
	}
	return (i);
}
