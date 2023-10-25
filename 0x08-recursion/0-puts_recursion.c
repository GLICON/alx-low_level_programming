#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_puts_recursion - prints a string, followed by a new line.
 *@s: the string
 *
 *Return: 0 always
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
