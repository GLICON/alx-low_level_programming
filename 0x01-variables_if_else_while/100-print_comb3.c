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
        for (i = 0; i < 10; i++)
        {
                putchar('0' + (i % 10));
		if (i < 10)
		{
			for (n = 1; n < 10; n++)
			{
				putchar('0' + (n % 10));
			}
		}
		else
		{
		}
		
		if (n != 9)
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
