#include "function_pointers.h"

/**
 * main - entry point
 * @argc: int variable
 * @argv: char variable
 *
 * Description: This function prints opcodes
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argc[1] < 0))
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1] - 1; i++))
		prints("%02hhx ", ((char *)main)[i]);
	printf("%02hhx\n", ((char *)main)[i]);
	return (0);
}

