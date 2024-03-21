#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all elements of a dlistint
 * @h: Pointer to a node in dlistint
 *
 * Return: Numer of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	if (h->next != NULL)
		return (1 + print_dlistint(h->next));

	return (1);
}
