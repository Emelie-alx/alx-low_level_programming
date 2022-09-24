#include "main.h"
/**
  * swap_int - Swap value of two ints
  * @a: First int value
  * @b: Second int value
  */
void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
