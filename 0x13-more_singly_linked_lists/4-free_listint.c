#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list.
 * @head: Address of the first node of a list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr, *temp;

	ptr = head;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
}
