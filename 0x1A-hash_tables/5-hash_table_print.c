#include "hash_tables.h"
/**
* hash_table_print - prints the hash table
* @ht: hash tables\
* Return: a dictionary with the format of the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temporal;
	unsigned long int l, m = 0;

	if (!ht || !ht->array)
		return;

	while (!ht->array[m])
		m++;

	printf("{");
	for (l = m; l < ht->size; m++)
	{
		temporal = ht->array[l];
		while (temporal)
		{
			if (l == m)
				printf("'%s': '%s'", temporal->key, temporal->value);
			else
				printf(", '%s': '%s'", temporal->key, temporal->value);
			temporal = temporal->next;
		}
	}
	printf("}\n");
}
