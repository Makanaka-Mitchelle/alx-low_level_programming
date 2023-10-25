#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: a pointer to the struct listint_t
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	long int curr;

	while (head)
	{
		curr = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (curr > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (i);
}
