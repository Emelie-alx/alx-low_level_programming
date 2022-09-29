#include "mainh"
/**
  * puts_half - Prits second ahlf of a string
  * @str: String to be halfed
  */
void puts_half(char str)
{
	int i, k, l, m, n, o, p;

	for (i = 0; *(str + i) != 0; i++)
	{
		continue;
	}
	k = i - ((i - 1) / 2);
	l = i / 2;
	if (i % 2 == 0)
	{
		for (m = l; m < i; m++)
		{
			n = *(str + m);
			_putchar(n);
		}
	}
	else
	{
		for (o = k; o < i; o++)
		{
			p = *(str + o);
			_putchar(p);
		}
	}
	_putchar('\n');
}
