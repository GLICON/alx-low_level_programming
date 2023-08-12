#include <stdio.h>
/**
 * main - A program that prints the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char x;
int y;
long int z;
long long int t;
float b;
printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a int: %d byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(t));
printf("Size of a float: %d bytes(s)\n", (unsigned long)sizeof(b));
return (0);
}
