#include "main.h"
/**
 * print_square - function with int type one argument
 * @size: size of square sides
 *
 * Description: nested loops to pring square with new line
 * Return: nothing.
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		y = 0;
		while (y < size)
		{
			x = 0;
			while (x < size)
			{
				_putchar('#');
				x++;
			}
			_putchar('\n');
			y++;
		}
	}
	else
		_putchar('\n');
}
