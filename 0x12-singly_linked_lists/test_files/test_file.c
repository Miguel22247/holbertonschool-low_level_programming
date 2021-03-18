#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}

/**
* list_len - a function that returns the number
*  of elements in a linked list_t list
* @h: input
* Return: 0
*/
size_t list_len(const list_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

/**
 * add_node - adds a node
 * @head: is the head node
 * @str: string
 * Return: a new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}

/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: input
 * @str: input
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, n = 0;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		n++;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	return (new);
}

/**
 * free_list - a function that frees a list_t list.
 * @head: struct
 * Return: free
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}

/**
 * turtle - prints before main
 */
void __attribute__ ((constructor)) turtle()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}