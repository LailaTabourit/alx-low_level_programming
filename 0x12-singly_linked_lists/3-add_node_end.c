#include "lists.h"

/*
* *add_node_end - adds a new node at the end
* *head: argument
* @str: argument
*
* by : lailitaa
* Return: new list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	if(!str)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	if (!(new_node->str))
	{
		free(new_node);
		return (NULL);
	}
	new_node->len =strlen(new_node->str);
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next =new_node;
	return (new_node);
}
