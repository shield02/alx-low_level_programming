#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: char variable, string will be attaced to it
 * @src: char variable, string that will be appended to dest
 *
 * Description: This function appends the src string to the
 * dest string, overwriting the terminating null byte (\0)
 * at the end of dest, and then adds a terminating null byte
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
		;

	while (src[a] != '\0')
	{
		a++;
		dest[i] = src[a];
		i++
	}

	return (dest)
}
