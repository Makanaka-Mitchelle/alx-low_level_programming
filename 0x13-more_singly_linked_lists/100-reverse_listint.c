#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: a pointer to the struct listint_t
 * Return:  a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = NULL;
	listint_t *move = NULL;

	while (*head)
	{
		move = (*head)->next;
		(*head)->next = curr;
		curr = *head;
		*head = move;
	}
	*head = curr;
	return (*head);
}
