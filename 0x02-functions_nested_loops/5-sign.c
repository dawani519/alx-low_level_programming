#include "main.h"

/**
 * print_sign - with one argument
 * @n: an input character
 * description: prints sign of numbers
 * Returns: 1 if greater than 0, 0 if 0, -1 if lesser
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
	return (0);
}
