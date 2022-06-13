#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to head pointer of linked list
 * @n: data to add to new node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	ptr = *head;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
