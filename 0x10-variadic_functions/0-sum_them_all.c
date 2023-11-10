#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: arguments number passed into the function
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;

va_list num;

va_start(num, n);

if (n == 0)
	return (0);

for (i = 0; i < n; i++)
	sum = sum + va_arg(num, int);
va_end(num);
return (sum);
}

