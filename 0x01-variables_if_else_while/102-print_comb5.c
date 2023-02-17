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
	int d1;
	int d2;

	int c2;
	int dd1;
	int dd2;

	while (c <= 98)
	{
		d1 = (c / 10 + '0');
		d2 = (c % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			dd1 = (c2 / 10 + '0');
			dd2 = (c2 % 10 + '0');

			if (c < c2)
			{
				putchar(d1);
				putchar(d2);
				putchar(' ');
				putchar(dd1);
				putchar(dd2);

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
