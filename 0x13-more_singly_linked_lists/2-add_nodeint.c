#include "lists.h"

/**
 * add_nodeint - to add a new node at the beginning of the linked list
 * @head: pointer to the firsrt node in the list
 * @n: data to insert in new node
 *
 * Return: new node pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));

if (!new)
{
	return (NULL);
}
new->n = n;
new->next = *head;
*head = new;

return (new);
}
