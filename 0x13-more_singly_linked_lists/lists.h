#ifndef KIDUS_MORE_LISTS_H
#define KIDUS_MORE_LISTS_H

#include <stdlib.h>

/**
 * struct listint_add_s - List of litint_t nodes' address
 * @add: listint_t node address
 * @next: Pointer to next node in this list
 */
typedef struct listint_add_s
{
	void *add;
	struct listint_add_s *next;
} listint_add_t;

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
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);

#endif /* KIDUS_LISTS_H */

