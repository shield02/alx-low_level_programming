#include "main.h"

/**
 * *_strncpy - that copies a string
 * @dest: char variable
 * @src: char variable
 * @n: int variable
 *
 * Description: This function copies a string.
 * It works exactly like strncpy
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
