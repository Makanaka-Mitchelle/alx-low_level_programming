#include "lists.h"

/**
 * sum_listint - function that returns the sum of the data (n) of a listint_t
 * @head: pointer to the struct listint_t
 * Return: sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
