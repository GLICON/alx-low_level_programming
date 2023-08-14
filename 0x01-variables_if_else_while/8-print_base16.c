#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	
	for (i = 0; i <= 15; i++)
	{
		putchar('0' + (i % 100));
	}
	putchar('\n');
	return (0);
}
