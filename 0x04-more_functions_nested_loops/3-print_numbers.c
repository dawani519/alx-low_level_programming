#include "main.h"

/**
 * print_numbers - print numbers 0-9
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
