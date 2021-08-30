#include "search_algos.h"
/**
* linear_search -  linear search algorithm
* @array: is a pointer to the array to search
* @size: is the number of elements in array
* @value: is the value to search
* Return: 0 or -1
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
