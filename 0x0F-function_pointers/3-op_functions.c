#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - finds sum of a and b
 * @a: int variable
 * @b: int variable
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds difference of a and b
 * @a: int variable
 * @b: int variable
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds product of a and b
 * @a: int variable
 * @b: int variable
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - finds quotient of a and b
 * @a: int variable
 * @b: int variable
 * Return: the quotient
 */
int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error: division by zero\n");
	exit(100);
}

/**
 * op_mod - finds the remainder of a and b
 * @a: int variable
 * @b: int variable
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error: division by zero\n");
	exit(100);
}

