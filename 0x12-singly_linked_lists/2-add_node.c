#include <string.h>
#include "lists.h"


/**
 * add_node - Adds a new node at the beginning of a list
 * @head: A pointer to a pointer of first node
 * @str: A string value to be copied to the new node
 * */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(size_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	*head = new_node;
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	return (new_node);
}
