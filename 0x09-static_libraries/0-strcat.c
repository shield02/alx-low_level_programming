#!/bin/bash
#include "main.h"

/**
 * *_strcat - concatenates string
 * @dest: param pointer to a char
 * @src: param pointer to a char
 *
 * Description: This function concatenate strings together
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

