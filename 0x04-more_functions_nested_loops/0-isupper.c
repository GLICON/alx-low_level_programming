#include "main.h"
#include <stdio.h>

/**
 * _isupper - A function that checks for uppercase character
 * @c: charatere used
 * Return: 1 if uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

