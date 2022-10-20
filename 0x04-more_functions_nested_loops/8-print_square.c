#include "holberton.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of square
 * Return: nothing.
 */

int main(void)
{
	int col, row;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
