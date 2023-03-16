#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _strlen - find length of a string
 * @s: char variable
 *
 * Description: This function returns the lenght of a string
 * Return: int
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*s != '\0')
	{
		s++;
		x++;
	}
	return (x);
}

/**
 * _putchar - writs character to stdout
 * @c: The character to print
 *
 * Description: This function prints to stdout
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _atoi - string to integer
 * @s: char variable
 *
 * Description: This function transforms a string to an integer
 * Return: int
 */
int _atoi(char *s)
{
	int i, fn = 1, ne = 1;
	unsigned int n = 0;

	i = 0;

	while (s[i] && fn)
	{
		if (s[i] == '-' && !n)
			ne *= -1;
		if (s[i] >= '0' && s[i] <= '9' & fn)
		{
			n *= 10;
			n += s[i] - '0';
		}
		else if (n > 0)
			fn = 0;
		i++;
	}
	n *= ne;
	return (n);
}

/**
 * fail - exits with error
 * @void: void variable
 *
 * Description: This function exits with error
 * Return: void
 */
void fail(void)
{
	char *error;
	int i;

	error = "Error";

	for (i = 0; error[i] != '\0'; i++)
		_putchar('\n');
	_putchar('\n');
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: count argument
 * @argv: vector argument
 *
 * Description: This function does the main job.
 * Return: 0 or 98
 */
int main(int argc, char *argv[])
{
	int i, j, size1, size2;

	(void) argv;
	if (argc != 3)
	{
		fail();
	}
	for (j = 1; j <= 2; j++)
		for (i = 0; argv[j][i] != '\0'; i++)
			if (argv[j][i] < '0' || argv[j][i] > '9')
				fail();
	size1 = _strlen(argv[1]);
	size2 = _strlen(argv[2]);
	printf("n1: %d\nn2: %d\n", size1, size2);
	return (0);
}
