#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: This prints all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char hx;

	for (hx = '0'; hx <= 'f'; hx++)
	{
		putchar(hx);
	}
	for (hx = 'a'; hx <= 'f'; hx++)
	{
		putchar(hx);
	}

	putchar('\n');
	return (0);
}
