#include "main.h"
/**
  * _strcmp - Compares two character strings
  * @s1: First string of characters
  * @s2: Second string of character
  * Return: -1 if s1 < s2
  * 0 if s1 == s2
  * 1 if s1 > s2
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (*(s1 + i) != '\n')
	{
		i++;
	}
	while (*(s2 + j) != '\n')
	{
		j++;
	}
	if (i < j)
	{
		return (-1);
	}
	else if (i == j)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
