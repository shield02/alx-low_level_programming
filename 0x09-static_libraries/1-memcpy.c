#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: char variable
 * @src: char variable
 * @n: unsigned int variable
 *
 * Description: This function copies memory area
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

