#include "lists.h"

/**
* print_list - prints all the elemnets of a list
* @h: pointer
* by: lailitaa
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}

