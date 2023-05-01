#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index of a list
* @head: pointer
* @index: index of node
*
* by: lailitaa
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *data = *head;
	unsigned int i;

	if (data == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(data);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (data->next == NULL)
			return (-1);
		data = data->next;

	}
	tmp = data->next;
	data->next = tmp->next;
	free(tmp);
	return (1);
}
