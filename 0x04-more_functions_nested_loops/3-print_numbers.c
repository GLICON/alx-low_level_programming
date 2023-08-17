#include <stdio.h>
include "main.h"

/**
 * print_numbers - To print 0-9
 * Return: 0 Always (Success)
 */

void print_numbers(void)
{
int i;
	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	return (0);
}
