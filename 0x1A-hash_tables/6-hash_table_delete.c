#include "hash_tables.h"
/**
* hash_table_delete - Delete the hash table
* @ht: the hash table
* Return: the hash table deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int l;
	hash_node_t *temporal = NULL;
	hash_node_t *next_temporal = NULL;

	if (!ht)
		return;

	while (i < ht->size)
	{
		temporal = next_temporal;
		while (temporal)
		{
			next_temporal = next_temporal->next;
			if (temporal->key != NULL)
				free(temporal->key);
			if (temporal->value != NULL)
				free(temporal->value);
			free(temporal);
		}
		free(ht->array[l]);
		l++;
	}
	free(ht->array);
	free(ht);
}