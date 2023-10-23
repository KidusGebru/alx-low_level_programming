#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a listint
 * @h: Pointer to a node in listint
 *
 * Return: Numer of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	if (h->next != NULL)
		return (1 + print_listint(h->next));

	return (1);
}
