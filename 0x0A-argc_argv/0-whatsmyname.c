#include <stdio.h>

/**
 * main - prints a string
 * @argc: int variable
 * @argv: char variable
 *
 * Description: This function prints its name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
