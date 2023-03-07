#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: char variable
 * @to: char variable
 *
 * Description: This function sets the value of a pointer to a char
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
