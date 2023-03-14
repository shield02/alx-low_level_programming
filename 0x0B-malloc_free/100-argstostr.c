#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of a program
 * @ac: int argument
 * @av: char argument
 *
 * Description: This function concatenates all arguments of a program
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *ch;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++)
	{
		j = 0;
		for (; av[i][j] != '\0'; j++)
			k++;
	}
	ch = malloc(k + ac + 1 * sizeof(char));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		for (; av[i][j] != '\0'; j++)
		{
			ch[l] = av[i][j];
			l++;
		}
		ch[l] = '\n';
		l++;
	}
	return (ch);
}
