#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: a pointer to the struct listint_t
 * @idx: index of the list where the new node will be added. Index starts at 0
 * @n: point to insert the input node
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newstr;
	listint_t *curr = *head;
	unsigned int i;

	newstr = malloc(sizeof(listint_t));
	if (!newstr || !head)
	{
		return (NULL);
	}
	newstr->n = n;
	newstr->next = NULL;
	if (idx == 0)
	{
		newstr->next = *head;
		*head = newstr;
		return (newstr);
	}

	for (i = 0; curr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newstr->next = curr->next;
			curr->next = newstr;
			return (newstr);
		}
		else
			curr = curr->next;
	}

	return (NULL);
}
