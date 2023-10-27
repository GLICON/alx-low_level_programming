#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return:0 always
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
