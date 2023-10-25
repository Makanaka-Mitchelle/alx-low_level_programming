#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - function that prints all the elements of a listint_t
 * @h: pointer to the struct listint_h
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
