#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: a pointer to the struct listint_t
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int size;
	listint_t *curr;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		size = *h - (*h)->next;
		if (size > 0)
		{
			curr = (*h)->next;
			free(*h);
			*h = curr;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
