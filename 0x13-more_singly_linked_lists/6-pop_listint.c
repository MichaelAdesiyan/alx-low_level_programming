#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the first element of a string
 * @head: pointer to list
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);
temp = *head;
*head = temp->next;
data = temp->n;
free(temp);
return (data);
}
