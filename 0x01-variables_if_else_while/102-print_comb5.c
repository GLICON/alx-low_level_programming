#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int n;

for (i = 0; i <= 99; i++)
{
	for (n = 0; n <= 99; n++)
	{
		if (i < n)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(' ');
			putchar((n / 10) + 48);
			putchar((n % 10) + 48);
			if (i == 98 || j == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
return (0);
}
