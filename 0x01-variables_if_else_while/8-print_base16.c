#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c;
	
	for (i = 0; i < 11; i++)
	{
		if (i < 10)
		{
			putchar('0' + (i % 10));
		}
		else
		{
			for (c = 'a'; c <= 'f'; c++)
			{
				putchar(c);
			}
		}
	}
	putchar('\n');
	return (0);
}
