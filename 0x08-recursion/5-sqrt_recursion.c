#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 *
 * Return: the result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 * @d: the square root
 *
 * Return: the result
 */

int real_sqrt_recursion(int n, int d)
{
	if (d * d > n)
	{
		return (-1);
	}
	if (d * d == n)
	{
		return (d);
	}
	return (real_sqrt_recursion(n, d + 1));
}
