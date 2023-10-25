#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: a pointer to the struct listint_t
 * @index: index of the node that should be deleted
 *  Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *ini = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!curr || !(curr->next))
			return (-1);
		curr = curr->next;
	}
	ini = curr->next;
	curr->next = ini->next;
	free(ini);
	return (1);
}
