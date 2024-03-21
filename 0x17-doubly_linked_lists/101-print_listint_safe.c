#include <stdio.h>
#include "lists.h"

/**
 * * free_listint_add - Frees a listint_add list
 * * @adds: Pointer to first node of list
 * *
 * * Return: Void
 */
void free_listint_add(listint_add_t *adds)
{
	if (adds == NULL)
		return;
	if (adds->next)
		free_listint_add(adds->next);
	free(adds);
}

/**
 * * push_listint_add - Add a node to a listint_add_t at the top
 * * @adds: Pointer to first node in the list
 * * @add: Address of node in the listint_t list
 * *
 * * Return: Void
 */
void push_listint_add(listint_add_t **adds, const listint_t *add)
{
	listint_add_t *new = malloc(sizeof(listint_add_t));

	if (new == NULL)
	{
		free_listint_add(*adds);
		exit(98);
	}
	new->add = (void *)add;
	new->next = *adds;
	*adds = new;
}

/**
 * check_listint_add - Checks if address of a listint_t node is present/looping
 * @adds: Pointer to first node in list of address/ listint_add_t
 * @add: Pointer to a node in listint_t list
 *
 * Return: 1 if present, 0 otherwise
 */
int check_listint_add(listint_add_t *adds, const listint_t *add)
{
	if (adds == NULL)
		return (0);
	if (adds->add == add)
		return (1);
	if (adds->next)
		return (check_listint_add(adds->next, add));
	return (0);
}



/**
 * * print_listint_safe - Print listint_t list with a loop
 * * @head: Pointer to first node in the list
 * *
 * * Return: Number of nodes, if it fails print 98
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_add_t *adds = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (check_listint_add(adds, head) == 1)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			free_listint_add(adds);
			return (i);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		push_listint_add(&adds, head);
		head = head->next;
		i++;
	}
	free_listint_add(adds);
	return (i);
}
