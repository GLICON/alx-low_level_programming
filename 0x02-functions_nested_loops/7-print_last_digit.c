#include "main.h"

/**
 * print_last_digit - Entry
 *@i: the integer used to check
 * Return: 0 Always (Success)
 */

int print_last_digit(int i)
{
int n;
	n = _putchar('0' + (i % 10));
return (n);
}
