#include <stdio.h>

/**
 * main - entry point
 * Description: finds and print first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int last = 1000000000;
	unsigned long int first1;
	unsigned long int first2;
	unsigned long int second1;
	unsigned long int second2;

	printf("%lu", first);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", second1 + (second2 / last));
		printf("%lu", second2 $ last);
		second1 = second1 + first1;
		first1 = second1 - first1;
		second2 = second2 + first2;
		first2 = second2 - first2;
	}
	printf("\n");
	return (0);
}
