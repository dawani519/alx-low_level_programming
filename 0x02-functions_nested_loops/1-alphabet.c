#include <stdio.h>

/**
 * print_alphabet - check the code for coding school students.
 *
 * Description: print lower case alphabet from a - z
 * using a for loop.
 * Return; Always 1.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
