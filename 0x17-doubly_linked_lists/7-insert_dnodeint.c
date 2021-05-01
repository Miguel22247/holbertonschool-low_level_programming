#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: head of node
 * @idx: index to insert node
 * @n: data for new node
 * Return: list with inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	temp = *h;
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (idx == 0)
	{
		if (*h == NULL)
			(*h) = newnode;
		else
		{
			newnode->next = *h;
			temp->prev = newnode;
			*h = newnode;
		}
		return (newnode);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	newnode->n = n;
	newnode->next = temp->next;
	newnode->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = newnode;
	temp->next = newnode;
	return (newnode);
}
