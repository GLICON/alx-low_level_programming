#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes in a looped linked list.
 * @head: ptr to the head of the listint_t to check.
 *
 * Return: 0(if list is not looped)
 */

size_t looped_listint_len(const listint_t *head)
{
const listint_t *x, *y;

size_t node = 1;

if (head == NULL || head->next == NULL)
	return (0);

x = head->next;
y = (head->next)->next;

while (y)
{
	if (x == y)
	{
		x = head;
		while (x != y)
		{
			node++;
			x = x->next;
			y = y->next;
		}
		x = x->next;
		while (x != y)
		{
			node++;
			x = x->next;
		}
		return (node);
	}
	x = x->next;
	y = (y->next)->next;
}

return (0);
}

/**
 * print_listint_safe - Prints a listint_t list
 * @head: A ptr to the head of the list.
 *
 * Return: The nodes number in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
size_t node, idx = 0;
node = looped_listint_len(head);

if (node == 0)
{
	for (; head != NULL; node++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
}
else
{
	for (idx = 0; idx < node; idx++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
}

return (node);
}
