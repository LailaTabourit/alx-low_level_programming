#include "lists.h"

/**
* print_listint_safe - prints a list
* @head: pointer
*
* by: lailitaa
* Return: the number of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	size_t n;
	const listint_t *tmp = NULL;
	const listint_t *node = NULL;


	tmp = head;

	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		i++;
		tmp = tmp->next;
		node = head;
		n = 0;

		while (n < i)
		{
			if (tmp == node)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (i);
			}
			node = node->next;
			n++;
		}
		if (!head)
			exit(98);
	}
	return (i);
}
