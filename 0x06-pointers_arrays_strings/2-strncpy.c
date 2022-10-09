#include "main.h"
/**
  * _strncpy - Copies a string
  * @dest: Pointer to buffer that would hold the copied string
  * @scr:Source of string to be copied
  * @n: Max byte of src to be copied
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	static char *p;
	
	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	p = dest;
	return (p);
}
