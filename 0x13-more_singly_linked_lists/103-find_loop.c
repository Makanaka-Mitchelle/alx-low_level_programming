#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: linked list to search for
 *
 *  Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr = head;
	listint_t *nxt = head;

	if (!head)
		return (NULL);

	while (curr && nxt && nxt->next)
	{
		nxt = nxt->next->next;
		curr = curr->next;
		if (nxt == curr)
		{
			curr = head;
			while (curr != nxt)
			{
				curr = curr->next;
				nxt = nxt->next;
			}
			return (nxt);
		}
	}

	return (NULL);
}
