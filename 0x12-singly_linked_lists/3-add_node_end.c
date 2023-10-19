#include <string.h>
#include "lists.h"

/**
 * _strlen - Return length of a string
 * @str: Pointer to string
 * @i: Index of string
 *
 * Return: Length of string
 */
int _strlen(const char *str, int i)
{
	if (str[i] == '\0')
		return (0);

	return (1 + _strlen(str, ++i));
}

/**
 * _get_last - Returns the last node in a list
 * @current: Pointer to the curren/start node
 *
 * Return: Pointer to pointer of the last node
 */
list_t *_get_last(list_t *current)
{
	if (current->next == NULL)
		return (current);

	return (_get_last(current->next));
}

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: A pointer to a pointer of first node
 * @str: A string value to be copied to the new node
 *
 * Return: Pointer ot new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node = NULL;
	list_t *new_node = malloc(sizeof(size_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = _get_last(*head);
		last_node->next = new_node;
	}

	new_node->str = strdup(str);
	new_node->len = _strlen(str, 0);
	new_node->next = NULL;

	return (new_node);
}
