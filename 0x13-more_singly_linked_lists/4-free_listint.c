#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint list
 *
 * @head: head of list to free
 *
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	if (head == NULL)
		return;

	for (next = head->next; head != NULL; head = next)
	{
		next = head->next;
		free(head);
	}
}

