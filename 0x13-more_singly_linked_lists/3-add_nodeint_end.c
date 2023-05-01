#include "lists.h"

/**
* *add_nodeint_end - adds a new node at the end
* @head: pointer
* @n: int
*
* by :lailitaa
* Return: new list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *tmp = *head;

	end = malloc(sizeof(listint_t));
	if (!end)
		return (NULL);

	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = end;
	return (end);
}
