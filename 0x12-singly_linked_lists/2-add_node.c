#include "lists.h"

/**
* *add_node - adds new node
* @head: argument
* @str: argument
*
* by: lailita
* Return: list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *lst;

	lst = malloc(sizeof(list_t));
	if (!lst)
		return (NULL);
	lst->str = strdup(str);
	lst->len = strlen(str);
	lst->next = *head;
	*head = lst;
	return (lst);
}

