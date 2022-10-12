#include "main.h"
/**
  * string_toupper - Converts lowercase characters in a string to
  * uppercase characters
  * @a: Pointer to the string
  * Return: Pointer to modified string
  */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; *(a + i) != 0; i++)
	{
		if (*(a + i) <= 'z' && *(a + i) >= 'a')
		{
			*(a + i) -= 32;
		}
	}
	return (a);
}
