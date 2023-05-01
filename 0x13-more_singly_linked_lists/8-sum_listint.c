#include "lists.h"
/**
* sum_listint - sum of all data
* @head: pointer
*
* by: lailitaa
* Return: result
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
