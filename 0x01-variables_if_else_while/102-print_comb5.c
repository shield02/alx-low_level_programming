#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: This should print all possible
 * combinations of two digits numbers. The numbers
 * should range from 0 to 99
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int 1d;
	int 2d;

	int c2;
	int 1dd;
	int 2dd;

	while (c <= 98)
	{
		1d = (c / 10 + '0');
		2d = (c % 10 + 'o');
		c2 = 0;
		while (c2 <= 99)
		{
			1dd = (c2 / 10 + '0');
			2dd = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(1d);
				putchar(2d);
				putchar(' ');
				putchar(1dd);
				putchar(2dd);

				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
