#include "lists.h"
#include <stdio.h>

/**
 * list_len -  returns the number of elements list_t
 * @h: linked list
 * Return: elements number
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;
	const list_t *new = h;

	while (new != NULL)
	{
		new = new->next;
		num++;
	}
	return (num);
}
