#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	printf("\n");
	free(new->str);
	new->str = NULL;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	free(new);
	return (0);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = list_len(head);
	printf("-> %lu elements\n", n);
	free(new->str);
	free(new);
	return (0);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	add_node(&head, "Bennett");
	add_node(&head, "Bilal");
	add_node(&head, "Chandler");
	add_node(&head, "Damian");
	add_node(&head, "Daniel");
	add_node(&head, "Dora");
	add_node(&head, "Electra");
	add_node(&head, "Gloria");
	add_node(&head, "Joe");
	add_node(&head, "John");
	add_node(&head, "John");
	add_node(&head, "Josquin");
	add_node(&head, "Kris");
	add_node(&head, "Marine");
	add_node(&head, "Mason");
	add_node(&head, "Praylin");
	add_node(&head, "Rick");
	add_node(&head, "Rick");
	add_node(&head, "Rona");
	add_node(&head, "Siphan");
	add_node(&head, "Sravanthi");
	add_node(&head, "Steven");
	add_node(&head, "Tasneem");
	add_node(&head, "William");
	add_node(&head, "Zee");
	print_list(head);
	return (0);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Anne");
	add_node_end(&head, "Colton");
	add_node_end(&head, "Corbin");
	add_node_end(&head, "Daniel");
	add_node_end(&head, "Danton");
	add_node_end(&head, "David");
	add_node_end(&head, "Gary");
	add_node_end(&head, "Holden");
	add_node_end(&head, "Ian");
	add_node_end(&head, "Ian");
	add_node_end(&head, "Jay");
	add_node_end(&head, "Jennie");
	add_node_end(&head, "Jimmy");
	add_node_end(&head, "Justin");
	add_node_end(&head, "Kalson");
	add_node_end(&head, "Kina");
	add_node_end(&head, "Matthew");
	add_node_end(&head, "Max");
	add_node_end(&head, "Michael");
	add_node_end(&head, "Ntuj");
	add_node_end(&head, "Philip");
	add_node_end(&head, "Richard");
	add_node_end(&head, "Samantha");
	add_node_end(&head, "Stuart");
	add_node_end(&head, "Swati");
	add_node_end(&head, "Timothy");
	add_node_end(&head, "Victor");
	add_node_end(&head, "Walton");
	print_list(head);
	return (0);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Bob");
	add_node_end(&head, "&");
	add_node_end(&head, "Kris");
	add_node_end(&head, "love");
	add_node_end(&head, "asm");
	print_list(head);
	free_list(head);
	head = NULL;
	return (0);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}
