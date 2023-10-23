#include "lists.h"

/**
 * _find_last - Finds last node of a list
 * @start: Entry node
 *
 * Return: Pointer to last node
 */
listint_t *_find_last(listint_t *start)
{
	if (start->next == NULL)
		return (start);
	return (_find_last(start->next));
}

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Pointer to pointer of first node
 * @n: Integer value of node
 *
 * Return: Pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *last;

	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = _find_last(*head);
		last->next = new;
	}
	new->n = n;
	return (new);
}
