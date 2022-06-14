#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - node add at  end of list
 * @head: character to print
 * @str: string for new node
 * Return:  node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *cur;
	list_t *new_nd;
	int c;

	cur = *head;
	while (cur && cur->next != NULL)
		cur = cur->next;

	for (c = 0; str[c] != '\0'; c++)
		;
	new_nd = malloc(sizeof(list_t));
	if (new_nd == NULL)
	{
		free(new_nd);
		return (NULL);
	}
	new_nd->str = strdup(str);
	if (new_nd->str == NULL)
	{
		free(new_nd);
		return (NULL);
	}
	new_nd->str = strdup(str);
	if (new_nd->str == NULL)
	{
		free(new_nd);
		return (NULL);
	}
	new_nd->len = c;
	new_nd->next = NULL;

	if (cur)
		cur->next = new_nd;
	return (new_nd);
}
