#include "main.h"

/**
 * last_index - returns the last index of a string
 * @s: pointer the string
 *
 * Description: This function checks a string for palindrome
 * Return: int
 */

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char variable
 *
 * Description: This function checks if a string is a palindrome or not
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker for the palindrome
 * @s: char variable
 * @start: int variable
 * @end: int variable
 * @pair: int variable
 *
 * Description: This function checks for a palindrome
 * Return: 0 or 1
 */

int check(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, pair));
}
