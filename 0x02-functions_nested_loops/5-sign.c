#include "main.h"

/**
 * print_sign - with one argument
 * @n: an input character
 * description: prints sign of numbers
 * zero or positive
 * Return: int.
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
