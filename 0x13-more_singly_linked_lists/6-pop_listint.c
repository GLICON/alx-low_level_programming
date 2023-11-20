#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: ptr to the first element
 *
 * Return: deleted data in element or 0(if empty)
 */

int pop_listint(listint_t **head)
{
listint_t *opp;
int i;

if (!head || !*head)
	return (0);

i = (*head)->n;
opp = (*head)->next;
free(*head);
*head = opp;
 
return (i);
}
