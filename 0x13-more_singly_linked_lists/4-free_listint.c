#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: a pointer to the struct listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
