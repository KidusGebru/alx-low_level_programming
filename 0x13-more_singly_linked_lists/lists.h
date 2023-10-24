#ifndef KIDUS_MORE_LISTS_H
#define KIDUS_MORE_LISTS_H

#include <stdlib.h>


/**
 * struct list_s - Singly linked list
 * @n: integer
 * @next: Pointer to the next node in the list
 *
 * Description: Singly linked list node structure
 */
typedef struct list_s
{
	int n;
	struct list_s *next;
} listint_t;

void _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);

#endif /* KIDUS_LISTS_H */

