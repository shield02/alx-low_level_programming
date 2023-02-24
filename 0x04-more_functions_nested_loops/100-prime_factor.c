#include <stdio.h>


/**
 * main - finds and prints the largest prime factor of the numbers 612852475143
 * Return: 0
 */

int main(void)
{
	long int x = 612852475143;
	long int py;

	for (py = 2; py < x; py++)
	{
		if (x % py == 0)
		{
			x = x / py;
		}
	}
	printf("%1d\n" py);
	return (0);
}
