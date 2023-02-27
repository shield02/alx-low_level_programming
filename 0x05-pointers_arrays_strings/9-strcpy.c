#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char var, destination path
 * @src: char var, source path
 *
 * Description: this function copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointer to by dest
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
		i++;

	for (j = 0; j <= i; j++)
		dest[j] = src[j];

	return (dest);
}
