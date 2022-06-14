#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *nxt;
	list_t *curr;

	curr = head;
	while (curr != NULL)
	{
		nxt = curr->next;
		free(curr->str);
		free(curr);
		curr = nxt;
	}
}
