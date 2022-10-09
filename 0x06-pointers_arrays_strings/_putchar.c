#include <unistd.h>
/**
  * _putchar - Prints a char to screen
  * @c: Input char
  * Return: Input char on success
  */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
