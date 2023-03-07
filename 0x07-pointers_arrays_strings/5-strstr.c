#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: char variable
 * @needle: char variable
 *
 * Description: This function locates the first occurance
 * of the substring `needle` in the string `haystack`
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
