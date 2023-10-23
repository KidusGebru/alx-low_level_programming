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

#endif /* KIDUS_LISTS_H */

