#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: ptr to the first node
 *
 * Return: ptr to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *former = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = former;
former= *head;
*head = next;
}

*head = former;

return (*head);
}
