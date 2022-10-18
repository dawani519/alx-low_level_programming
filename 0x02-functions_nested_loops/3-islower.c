#include "main.h"

/**
 * _islower - Entry point
 * @c: An input character
 * Desciption: checks for lower case character
 * Return: 1 for lowercase and 0 for other
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
