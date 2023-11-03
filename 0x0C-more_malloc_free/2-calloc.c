#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of mmembers
 * @size: array size
 *
 * Return: ptr to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *output;

if (nmemb == 0 || size == 0)
	return (NULL);
output = calloc(nmemb, size);
if (output == NULL)
	return (NULL);
else
	return (output);
}
