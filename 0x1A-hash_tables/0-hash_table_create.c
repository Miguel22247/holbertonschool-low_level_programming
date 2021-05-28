#include "hash_tables.h"
/**
* hash_table_create - create a new hash table
* @size: size of the array
* Return: a pointer to the new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table

	if (size <= 0)
		return (NULL);
	
	new_hash_table  = malloc(sizeof(hash_table_t));
	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t **) * size);
	if (!new_hash_table->array)
		return (NULL);
	
	return (hashtable);
}
