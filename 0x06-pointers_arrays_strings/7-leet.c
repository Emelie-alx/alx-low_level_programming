#include "main.h"
/**
  * leet - Encodes a string into 1337
  * @n: String to be encoded
  * Return: The encoded string
  */
char *leet(char *n)
{
	int i, j;
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (i = 0; *(n + i) != 0; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(n + i) == a[j])
			{
				*(n + i) = b[j];
			}
		}
	}
	return (n);
}
