#include "main.h"
/**
  * _strlen - Print the length of string
  * @s: Pointer to string
  * Return: Length of string
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s != 0)
	{
		i++;
		s++;
	}
	return (i);
}
