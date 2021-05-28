#include "hash_tables.h"
/**
* hash_table_print - prints the hash table
* @ht: hash tables
* Return: a dictionary with the format of the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temporal = NULL;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		temporal = ht->array[i];
		while (temporal)
		{
			printf("'%s' : '%s'", temporal->key, temporal->value);
			if (!ht->array[i + 1])
				break;
			printf(", ");
			temporal = temporal->next;
		}
		i++;
	}
	printf("}\n");
}
