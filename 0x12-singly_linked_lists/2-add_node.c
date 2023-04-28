#include "lists.h"

/*
* *add_node - adds new node
* #head: argument
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
	lst->len = strdup(str);
	lst->next = strlen(str);
	*head = lst;
	return (lst);
}

