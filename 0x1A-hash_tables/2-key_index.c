#include "hash_tables.h"
/**
* key_index - a function that gives the index of the key
* @key: key of the hash table
* @size: size of the array
* Return: the index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int find_the_index;

	find_the_index = hash_djb2(key);
	return (find_the_index % size);
}
