#!/bin/bash
#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 *
 * Description: This function copies memory
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
