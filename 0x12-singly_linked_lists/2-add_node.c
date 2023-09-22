#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - to add a new node at the beginning of a linked list
 * @head: double pointer to the list_t
 * @str: new string
 *
 * Return: NULL or *head
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *_new;
unsigned int len = 0;

while (str[len])
{
len++;
_new = malloc(sizeof(list_t));
if (!_new)
	return (NULL);
_new->str = strdup(str);
_new->len = len;
_new->next = (*head);
(*head) = _new;
}
return (*head);
}
