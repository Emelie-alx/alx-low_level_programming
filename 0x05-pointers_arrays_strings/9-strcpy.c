#include "main.h"
/**
  * _strcpy - Copy an input string to a specified buffer
  * @dest: Temporary Buffer
  * @src: string to be copied into dest
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	static char *l;
	int i = 0;

	do {
		*(dest + i) = *(src + i);
		i++;
	} while (*(src + i) != '\0');
	*(dest + i) = *(src + i);
	l = dest;
	return (l);
}
