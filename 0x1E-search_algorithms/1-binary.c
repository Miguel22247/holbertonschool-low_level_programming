#include "search_algos.h"
/**
* binary_search - search for a value using a binary search algorithm
* @array: array to be searched
* @size: length of the array
* @value: value to be searched
* Return: 0 or -1
*/

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid, i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = 0; i < high; i++)
			printf("%d ", array[i]);
		printf("%d\n", array[i]);

		mid = (low + high) /2;
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}