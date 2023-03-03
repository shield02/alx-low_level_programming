#include "main.h"

/**
 * *string_toupper - changes all lowercase letters to uppercase
 * @str: char variable - any string letter
 *
 * Description: This function changess all lowercase letters
 * of a string to uppercase
 * Return: char
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
	}
	return (str);
}
