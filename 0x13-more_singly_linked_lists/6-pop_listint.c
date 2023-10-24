#include "lists.h"

/**
 * pop_listint - Delete head node of a list
 * @head: Pointer to pointer of first node
 *
 * Return: Removed node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
