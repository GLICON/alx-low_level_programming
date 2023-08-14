#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
	for (i = 0; i < 10; i++)
	{
		putchar('0' + (i % 10));
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
		}
}
putchar('\n');
return (0);
}
