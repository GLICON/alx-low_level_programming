#include "main.h"

/**
 * print_to_98 - Entry
 * @n: first natural number
 * Return: 0 Always (Success)
 */

void print_to_98(int n)
{
int x;
int y;
int z;
	if (n < 98)
	{
		for (x = n; x <= 98; x++)
	{
		printf("%d", x);
		printf(',', x);
	}
return (0);
}
