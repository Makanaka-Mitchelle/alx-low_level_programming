#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: a pointer to the struct listint_t
 * @index: index of the node, starting at 0
 * Return: nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr = head;

	while (curr && i < index)
	{
		curr = curr->next;
		i++;
	}
	return (curr ? curr : NULL);
}
