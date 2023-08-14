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
	
	for (i = 0; i < 16; i++)
	{
		if (i <10)
		{
			putchar('0' + (i % 10));
		}
		else 
		{
			for (c = 'A'; c <= 'F'; c++)
			putchar(c);
		}
		
	}
	putchar('\n');
	return (0);
}
