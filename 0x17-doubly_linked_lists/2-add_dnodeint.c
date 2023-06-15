#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of list
 * by : laila
 * @head: head
 * @n: value of the element
 * Return: the address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;
	dlistint_t *h;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new_n->next = h;

	if (h != NULL)
		h->prev = new_n;

	*head = new_n;
	return (new_n);
}
