#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a <= argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
