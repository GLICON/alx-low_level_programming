#include <stdio.h>
#include "main.h"

/**
 * main - to print the number of arguments passed to the program
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*to ignore the  argv parameter*/
	printf("%d\n", argc - 1);

	return (0);
}
