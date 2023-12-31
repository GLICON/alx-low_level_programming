#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: ptr to the first element in the list
 * @n: daa to put in the new element
 *
 * Return: ptr to the new node, or NULL (fails)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *opp = *head;

new = malloc(sizeof(listint_t));

if (!new)
	return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
	*head = new;
return (new);
}

while (opp->next)
	opp = opp->next;

opp->next = new;

return (new);
}
