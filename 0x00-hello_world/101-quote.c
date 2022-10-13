#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * *Return: Always 1 (success)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - DORA KORPAR, 2015-1019\n", 59);
	return (1);
}
