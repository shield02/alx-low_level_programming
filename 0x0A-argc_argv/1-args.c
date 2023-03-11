#include <stdio.h>

/**
 * main - prints a number
 * @argc: int variable
 * @argv: char variable
 *
 * Description: This function prints the number of arguments passed into it
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
