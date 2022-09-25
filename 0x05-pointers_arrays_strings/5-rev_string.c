#include "main.h"
/**
  * rev_string - Reverses a string
  * @s: String to be reversed
  */
void rev_string(char *s)
{
 	int i = 0, j = 0, k = 0, a, b;

	while (*(s + j) != 0)
	{
		i++;
		j++;
	}
	a = i + 1;
	i = i - 1;
	char c[a];

	while (i >= 0)
	{
		c[k] = *(s + i);
		k++;
		i--;
	}
	b = 0;
	k = k - 1;
	while (k >= 0)
	{
		*(s + b) = c[k];
		b++;
		k--;
	}
}
