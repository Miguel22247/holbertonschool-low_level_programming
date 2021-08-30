#include "search_algos.h"
/**
* linear-search -  linear search algorithm
* @array: is a pointer to the array to search
* @size: is the number of elements in array
* @value: is the value to search
* Return: 0 or -1
*/

int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	while (array)
	{
		print(array[i]);
		for (i = 0; i < size; i++)
		{
			if (array[i] == value)
				return (array[i]);
		}	
	}
	return (-1);
}