#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	char w;

for (w = 'z'; w >= 'a'; w--)
{
	putchar(w);
}
putchar('\n');
return (0);
}
