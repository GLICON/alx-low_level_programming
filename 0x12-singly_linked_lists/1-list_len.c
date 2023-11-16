#include "lists.h"

/**
 * list_len - to get the length of a list
 * @h: head node
 *
 * Return: length of node
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
