#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = '0';
int n = '0';

while (i <= '9')
{
	while (n <= '9')
	{
		if (i != n || i < n)
		{
			putchar('i');
			putchar('n');
			if (i != 8 && n != 9)
			{
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar('\n');
			}
		}
		n++;
	}
	j= '0';
	i++;
}
return (0);
}

