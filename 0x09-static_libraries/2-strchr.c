#include "main.h"

/**
 * *_strchr - locates a char in a string
 * @s: char variable
 * @c: character to be located in s
 *
 * Description: This function locates a chararacter in a string
 * Return: *S
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}

