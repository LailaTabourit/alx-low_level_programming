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
	long int dif;

	while (head)
	{
		dif = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (dif > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (i);
}
