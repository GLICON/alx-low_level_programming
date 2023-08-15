#include "main.h"

/**
 * print_last_digit - Entry
 *@i: the integer used to check
 * Return: 0 Always (Success)
 */

int print_last_digit(int i)
{
int n;
	if (i < 0)
	{
		i = -i;
	}
	n = _putchar('0' + (i % 10));
	if (n < 0)
	{
		n = -n;
	}
	putchar(n);
	return (n);
}
