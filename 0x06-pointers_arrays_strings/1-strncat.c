#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: char variable
 * @src: char variable
 * @n: int variable
 *
 * Description: This function concatenates a string to another
 * using at most n bytes with char, src, n
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
