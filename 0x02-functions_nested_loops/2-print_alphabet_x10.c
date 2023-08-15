#include "main.h"

/**
 * print_alphabet_x10 - Entry
 */

void print_alphabet_x10(void)
{
int x;
char y;
	for (x = 0; x < 10; x++)
	{
		_putchar('\n');
			for (y = 'a'; y <= 'z'; y++)
			{
				_putchar(x);
			}
	}
}
