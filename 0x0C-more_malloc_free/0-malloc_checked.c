#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: memory size
 *
 * Return: new memory pointer
 */

void *malloc_checked(unsigned int b)
{
void *result =  malloc(b);

if (result  == NULL)
	exit(98);

return (result);
}
