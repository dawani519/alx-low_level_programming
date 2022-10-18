#include "main.h"

/**
 * _isalpha - Entry point
 * @c: An input character
 * Description: funtion returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lwer <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z' upper++)
		{
			if (c == lower || c == uper)
				isletter = 1;
		}
	}
	return (isletter);
}
