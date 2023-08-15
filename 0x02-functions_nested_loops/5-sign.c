#include "main.h"

/**
 * print_sign - Entry
 * @n: the character to be checked
 * Return: 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
