#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - check the code for coding school students.
 *
 * Description: print lower case alphabet from a - z
 * Return; Always 1.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
