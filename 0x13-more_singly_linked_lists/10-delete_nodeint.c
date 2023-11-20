#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *opp = *head;
listint_t *present = NULL;
unsigned int n = 0;

if (*head == NULL)
	return (-1);

if (index == 0)
{
*head = (*head)->next;
free(opp);
return (1);
}

while (n < index - 1)
{
if (!opp || !(opp->next))
	return (-1);
opp = opp->next;
n++;
}

present = opp->next;
opp->next = present->next;
free(present);

return (1);
}
