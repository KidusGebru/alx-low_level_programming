#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node
 * @head: Pointer to first node of list
 * @index: 0 based index of desired node in the list
 *
 * Return: Pointer ot nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (head->next)
	{
		head = head->next;
		i++;
		if (index == i)
			return (head);
	}
	return (NULL);
}
