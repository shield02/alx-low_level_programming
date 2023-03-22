#include "function_pointers.h"

/**
 * print_name - will print a name
 * @name: char variable
 * @f: void function
 *
 * Description: This function prints a name
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

