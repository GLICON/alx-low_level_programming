#include <stdio.h>
#include "main.h"

/**
 * stoi - converts string to integer
 * @s: the string
 *
 * Return: 0 always
 */

int stoi(char *s)
{
	int i, d, n, len, f, digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && f == 0)
	{
		if (s[i] == '-')
		{
			++d;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0',
			      if (d % 2)
			      {
				      digit = -digit;
			      }
			n = n * 10 + digit;
			f = 1;
			if (s[i+1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			f = 0;
		}
		i++;
	}
	if (f == 0)
	{
		return (0);
	}
	return (n);
}

/**
 * main - program to multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
int mul, n1, n2;

if (argc > 3||argc < 3)
{
	printf("Error\n");
	return (1);
}

n1 = stoi(argv[1]);
n2 = stoi(argv[2]);
mul = n1 *n2;

printf("%d\n", mul);

return (0);
}
