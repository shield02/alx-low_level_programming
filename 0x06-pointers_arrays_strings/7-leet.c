#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: char variable
 *
 * Description: This function encodes a string into 1337
 * Return: char
 */

char *leet(char *str)
{
	int i, ii;
	char str1[] = "aeotl";
	char str2[] = "AEOTL";
	char str3[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
		{
			if (str[i] == str1[ii] || str[i] == str2[ii])
			{
				str[i] = str3[ii];
				break;
			}
		}
	}

	return (str);
}
