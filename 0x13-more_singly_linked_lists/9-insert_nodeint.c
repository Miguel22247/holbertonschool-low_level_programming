#include "lists.h"
/**
 * insert_nodeint_at_index - Entry Point
 * @head: head
 * @idx: index
 * @n: data
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;

	listint_t *new;
	listint_t *temp;
	{
		if (*head == NULL)
			return (NULL);

		temp = *head;

		while (temp != NULL)
		{
			if (counter == idx - 1)
			{
				new = malloc(sizeof(listint_t));
				if (new == NULL)
				{
					return (NULL);
				}
				else
				{
					new->n = n;
					new->next = temp->next;
					temp->next = new;
					return (new);
				}
			}
			if (temp->next != NULL)
				temp = temp->next;
			counter++;
		}
		return(NULL);
	}
}
