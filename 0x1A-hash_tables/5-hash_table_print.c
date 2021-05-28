#include "hash_tables.h"
/**
* hash_table_print - prints the hash table
* @ht: hash tables\
* Return: a dictionary with the format of the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int l = 0;
	hash_node_t *temporal = NULL;

	if (!ht)
		return;

	printf("{");
	while (l < ht->size)
	{
		temporal = ht->array[l];
		while (temporal)
		{
			printf("'%s': '%s'", temporal->key, temporal->value);
			if (ht->array[l + 1] == NULL)
				break;
			printf(", ");
			temporal = temporal->next;
		}
		l++;
	}
	printf("}\n");
}
