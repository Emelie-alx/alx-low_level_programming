#include <stdio.h>
/**
  * print_array - print a specified number of int array
  * @a: Input array
  * @n: Number of array index to be printed
  */
void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		j = *(a + i);
		if (i == (n - 1))
		{
			printf("%d", j);
		}
		else
		{
			printf("%d, ", j);
		}
	}
	printf("\n");
}
