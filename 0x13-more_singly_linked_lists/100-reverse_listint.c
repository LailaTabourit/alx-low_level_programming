#include "lists.h"

/**
* *reverse_listint - reverse a list
* @head: pointer
*
* by: lailitaa
* Return: reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *nextnode = NULL;

	while (head != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = prev;
		*head = nextnode;
	}

	*head = prev;
	return (*head);
}
