#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Description: This function assigns a random value to a variable
 * and compares it with 5, 0, and 6
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i amd is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);

	return (0);
}
