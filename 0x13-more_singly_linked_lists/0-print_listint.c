#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - function that prints all the elements of a listint_t
 * @h: pointer to the struct listint_h
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
