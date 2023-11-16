#include "lists.h"
#include <stdlib.h>

/**
 * add_node - add node at the beginning
 * @head: node head
 * @str: string to be stored
 *
 * Return: new element's address or Null (fail)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int x, count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		count++;
	new->len = count;
	new->next = *head;
	*head = new;

	return (*head);
}
