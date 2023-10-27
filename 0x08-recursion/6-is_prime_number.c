#include "main.h"

/**
 * is_prime_number - returns 1 if integer is a prime number
 * @n: the number
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - to check if a number is a prime number
 * @n: the number
 * @d: the iterating number
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int real_prime(int n, int d)
{
	if (d == 1)
	{
		return (1);
	}
	if (n % d == 0 && d > 0)
	{
		return (0);
	}
	return (real_prime(n, d - 1));
}
