#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a pointer to the struct listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;
	while (*head)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
	}
	*head = NULL;
}
