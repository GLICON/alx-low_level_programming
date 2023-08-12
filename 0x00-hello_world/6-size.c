#include <stdio.h>

/**
 * main - A program that prints the size of various types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;
	char y;
	long int z;
	long long int i;
	float b;

printf("Size of a char : %lu bytes(s)\n", (unsigned long)sizeof(x));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int : %lu bytes(s)\n", (unsigned long)sizeof(z));
printf("Size of a long long int : %lu bytes(s)\n", (unsigned long)sizeof(i));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(b));
return (0);
}
