#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition operator
 * @a: int to add
 * @b: int to add
 *
 * Return: (0)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operator
 * @a: int to subtract from
 * @b: int to subtract
 *
 * Return: (0)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operator
 * @a: int to multiply
 * @b: int to multiply
 *
 * Return: (0)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: int to divide
 * @b: int to divide by
 *
 * Return: (0)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulus operator
 * @a: int modulus
 * @b: int modulus
 *
 * Return: (0)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
