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

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	temp = *head;
	n = temp->n;
	if (temp->next)
	{
		*head = temp->next;
		free(temp);
		return (n);
	}
	else
	{
		*head = NULL;
		free(temp);
		return (n);
	}
}
