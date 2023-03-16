#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: char variable
 * @s2: char variable
 * @n: unsigned int variable
 *
 * Description: this function concatenates two strings
 * Return: str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *p;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}
	if (n >= j)
		n = j;
	p = malloc(i + n + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		p[k] = s1[l];
		l++;
	}
	for (l = 0; l < n; l++)
	{
		p[k] = s2[l];
		k++;
	}
	p[k] = '\0';
	return (p);
}
