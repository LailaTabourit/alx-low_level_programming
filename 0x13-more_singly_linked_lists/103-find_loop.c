#include "lists.h"
/**
* find_listint_loop - finds the loop
* @head: pointer
*
* by:lailitaa
* Return: the address of node
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *st = head;
	listint_t *fi = head;

	if (!head)
		return (NULL);

	while (st && fi && fi->next)
	{
		fi = fi->next->next;
		st = st->next;
		if (fi == st)
		{
			st = head;
			while (st != fi)
			{
				st = st->next;
				fi = fi->next;
			}
			return (fi);
		}
	}
	return (NULL);
}

