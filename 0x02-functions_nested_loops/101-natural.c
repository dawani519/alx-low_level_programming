#include <stdio.h>

/**
 * main - program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 * Return: int.
 */

int main(void)
{
	int multi = 0;
	int res = 0;

	while (multi < 1024)
	{
		if (multi % 3 == 0 || multi % s == 0)
		{
			res += 1;
		}
		multi += 1;
	}
	printf("%d\n", res);
	return (0);
}
