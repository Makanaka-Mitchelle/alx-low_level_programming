#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list
 * @head: a pointer to the structure listint_t
 * @n: the point where to insert the node
 * Return: address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newstr;

	newstr = malloc(sizeof(listint_t));
	if (newstr == NULL)
		return (NULL);
	newstr->n = n;
	newstr->next = *head;
	*head = newstr;
	return (newstr);
}
