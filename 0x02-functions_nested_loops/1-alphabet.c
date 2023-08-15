#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10- Entry
 *
 * Return: 0 Always (Success)
 */

void print_alphabet_x10(void)
{
char x;
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
