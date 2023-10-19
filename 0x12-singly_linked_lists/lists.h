#ifndef KIDUS_LISTS_H
#define KIDUS_LISTS_H

#include <stdlib.h>


/**
 * struct list_s - Singly linked list
 * @str: String (malloc'd string)
 * @len: Length of the string
 * @next: Pointer to the next node in the list
 *
 * Description: Singly linked list node structure
 */
typedef struct list_s
{
		char *str;
		unsigned int len;
		struct list_s *next;
} list_t;

void _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif /* KIDUS_LISTS_H */

