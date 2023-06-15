#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: head of the list
 * by: me me me me
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cmp;

	cmp = 0;

	if (h == NULL)
		return (cmp);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cmp++;
		h = h->next;
	}
	return (cmp);
}
