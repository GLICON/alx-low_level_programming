#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int N;

	if (n < 0)
	{
		N = -n;
		_putchar('-');
	} else
	{
		N = n;
	}

	if (N / 10)
	{
		print_number(N / 10);
	}

	_putchar((N % 10) + '0');
}

