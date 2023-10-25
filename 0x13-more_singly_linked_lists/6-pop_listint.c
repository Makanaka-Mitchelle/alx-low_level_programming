#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: a pointer to the struct listint_t
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *curr;
	int i;

	if (!head || !*head)
	{
		return (0);
	}
	i = (*head)->n;
	curr = (*head)->next;
	free(*head);
	*head = curr;
	return (i);
}
