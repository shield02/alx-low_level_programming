#!/bin/bash

#include "main.h"

/**
 * _memset - memory set function
 * @s: char variable
 * @b: char variable
 * @n: int variable
 *
 * Description: This function sets the memory
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
