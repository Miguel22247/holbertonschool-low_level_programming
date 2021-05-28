#include "hash_tables.h"
/**
* hash_table_get - gets the element at the hash table
* @ht: hash table
* @key: key
* Return: an element
*/
har *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temporal = NULL;

	if (!key)
		return (NULL);
	
	if (ht)
	{
		index = key_index((const unsigned char *)key, ht->size);
		temp = ht->array[index];
		while (temp)
		{
			if(strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
