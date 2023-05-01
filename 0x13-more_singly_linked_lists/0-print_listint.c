#include "lists.h"

/**
* print_listint - Entry point
* @h: pointer
* by: lailita
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t cmp = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cmp++;
		h = h->next;
	}
	return (cmp);
}
