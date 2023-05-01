#include "lists.h"

/**
* pop_listint - deletes the head node of a list
* @head: pointer
*
* by: lailitaa
* Return: the head node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!*head)
		return (0);
	tmp = *head;
	i = tmp->n;
	*head = (*head)->next;

	free(tmp);
	return (i);
}
