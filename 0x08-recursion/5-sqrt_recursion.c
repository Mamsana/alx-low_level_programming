#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 *  _sqrt_recursion - return the natural square root of a number
 *  @n: int number
 *  Return: If no natural square root, return -1. Else return natural
 *  square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root
 * @n: number to determine if square root
 * @i: iterate number
 *
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
