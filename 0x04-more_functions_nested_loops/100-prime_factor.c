#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the numbers 612852475143
 * Return: 0
 */

int main(void)
{
	long int x = 612852475143;
	int pn;

	for (pn = 2; pn < x; pn++)
	{
		if (x % pn == 0)
		{
			x = x / pn;
		}
	}
	printf("%1d\n", pn);
	return (0);
}
