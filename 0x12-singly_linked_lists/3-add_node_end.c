#include "lists.h"

/**
* lenstr - finds the length of a string
* @str: string to get
* length
*
* Return: length of string
*/

unsigned int lenstr(char *str)
{
unsigned int i;

for (i = 0; str[i]; i++)
	;
return (i);
}

/**
* add_node_end - adds a new node to the end of linked list
* @head: double pointer to a linked list
* @str: string to add to the new node
*
* Return: pointer to the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;
if (str == NULL)
	return (NULL);

new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
	free(new);
	return (NULL);
}
new->len = lenstr(new->str);
new->next = NULL;

if (*head == NULL)
{
	*head = new;
	return (new);
}

tmp = *head;
while (tmp->next)
	tmp = tmp->next;
tmp->next = new;
return (new);
}

