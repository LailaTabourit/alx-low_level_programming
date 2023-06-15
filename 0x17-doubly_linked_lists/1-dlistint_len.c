#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a double linked list
 * by: laila
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cmp;

	cmp = 0;

	if (h == NULL)
		return (cmp);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		cmp++;
		h = h->next;
	}
	return (cmp);
}
