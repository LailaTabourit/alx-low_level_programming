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
	listint_t *current = *head;
	listint_t *nextnode = NULL;

	while (current != NULL)
	{
		nextnode = current->next;
		current->next = prev;
		prev = current;
		current = nextnode;
	}
	*head = prev;
	return (*head);
}
