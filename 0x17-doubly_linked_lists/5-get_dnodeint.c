#include "lists.h"

/**
 * get_dnodeint_at_index - get the node of a linked list
 * @head: the head of the list
 * @index: index
 * Return: data of the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (count == index)
			break;
		count++;
		head = head->next;
	}

	return (head);
}
