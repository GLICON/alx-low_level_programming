#include "main.h"

/**
 * more_numbers - print numbers from 0-14 ten times
 *
 * return: void
 */

void more_numbers(void)
{
int x;
int y;
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar('1');
			}
				_putchar('0' + (y % 10));
		}
		_putchar('\n');
	}
}
