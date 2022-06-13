#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to head pointer of linked list
 * Return: pointer to first node of reversed list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
