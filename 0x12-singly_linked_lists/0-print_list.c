#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list
 * Return: The number of nodes in h.
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;
	const list_t *new = h;

	while (new != NULL)
	{
		printf("[%d] %s\n", new->len,
				new->str != NULL ? new->str : "(nil)");
		new = new->next;
		num++;
	}
	return (num);
}
