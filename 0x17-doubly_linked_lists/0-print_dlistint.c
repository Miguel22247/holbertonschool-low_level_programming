#include "lists.h"

/**
 * print_dlistint - function that prints a list
 * @h: pointer to list to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
	{
		return (nodes);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
