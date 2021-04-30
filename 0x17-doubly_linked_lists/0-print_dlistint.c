#include "lists.h"

/**
* print_dlistint - prints data in nodes
* @h: head of the node
* Return: how many nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
