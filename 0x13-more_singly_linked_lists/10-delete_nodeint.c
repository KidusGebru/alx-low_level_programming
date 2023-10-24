#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at given index
 * @head: Pointer to first node
 * @index: Zero based index of desired node within list
 *
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index - 1)
		{
			if (temp->next == NULL)
				return (-1);
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
