#include "lists.h"

/**
 * free_list - Frees memory allocated for a list
 * @head: A pointer to first node
 *
 * Return: Always void
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_list(head->next);
		}
		free(head->str);
		free(head);
	}
}
