#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: list
 * Return: number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
