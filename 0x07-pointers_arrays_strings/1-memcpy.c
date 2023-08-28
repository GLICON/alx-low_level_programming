#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: the memory where it is stored
 * @src: the memory where it is copied
 * *@n: the number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
