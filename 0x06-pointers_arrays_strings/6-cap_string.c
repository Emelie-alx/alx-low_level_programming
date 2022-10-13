#include "main.h"
/**
  * cap_string - Capitalise all first words of a string
  * @n: String to be capitalised
  * Return: modified string
  */
char *cap_string(char *n)
{
	int num = 0, i;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int j = sizeof(a) / sizeof(int);

	if (*(n + num) <= 'z' && *(n + num) >= 'a')
	{
		*(n + num) -= 32;
	}
	num++;
	for (; *(n + num) != 0; num++)
	{
		for (i = 0; i < j; i++)
		{
			if (*(n + num) == a[i])
			{
				if (*(n + (num + 1)) <= 'z' && *(n + (num + 1)) >= 'a')
				{
					*(n + (num + 1)) -= 32;
				}
			}
		}
	}
	return (n);
}
