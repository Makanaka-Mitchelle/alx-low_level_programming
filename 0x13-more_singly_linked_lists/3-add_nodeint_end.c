#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t
 * @head: a pointer to the struct listint_t
 * @n: the number to insert to the node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newstr;
	listint_t *curr = *head;

	newstr = malloc(sizeof(listint_t));
	if (newstr == NULL)
		return (NULL);
	newstr->n = n;
	newstr->next = NULL;
	if (*head == NULL)
	{
		*head = newstr;
		return (newstr);
	}
	while (curr->next)
	{
		curr = curr->next;
	}
	curr->next = newstr;
	return (newstr);
}
