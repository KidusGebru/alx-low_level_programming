#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints contents of list_s nodes
 * @h: Pointer to a node in the list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->str != NULL)
		printf("[%u] %s\n", h->len, h->str);
	else
		printf("[%d] %s\n", 0, "(nil)");

	if (h->next != NULL)
		return (1 + print_list(h->next));
	return (1);
}

