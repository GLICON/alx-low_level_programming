#include <stdio.h>
#include "lists.h"

/**
 * print_listint - to print all the elements of listint_t
 * @h: linked list
 *
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
size_t number = 0;

while (h)
{
	printf("%d/n", h->n);
	number++;
	h = h->next;
}
return (number);
}
