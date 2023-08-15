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
int k = '0';

while (i <= '9')
{
	while (n <= '9')
	{
		while (k <= '9')
		{
			if (i != n && i != n && n != k && i < n && i < k && n < k)
			{
			       putchar(i);
			       putchar(n);
			       putchar(k);
			       if (i == '7' && n == '8' && k =='9')
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
	       k++;
	}
	k = '0';
	n++;
}
n = '0';
i++;
return (0);
}
