#include "main.h"

/**
 * _islower - Entry
 * @c: the character to be checked
 * Return: 1 if lowwercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
