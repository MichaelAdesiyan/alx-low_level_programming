#include "hash_tables.h"

/**
 * hash_table_create - create hash table given size 
 * @size: size 
 * Return: pointer to table; NULL if error 
 */
{
	hash_table_t *ht;
	hash_node_t **array;
	unsigned long int i = 0;
	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (!array)
	{
		free(ht);
		return (NULL);
	}
	while (i < size)
	{
		arraY[i] = NULL;
		i++;
	}
	ht- >size = size;
	ht->array = array;
	return (ht);
}

