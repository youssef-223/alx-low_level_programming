#include "lists.h"


/**
 * add_node - Short description, single line
 * @head: Description of parameter x
 * @str: Description of parameter x
 * Description: Longer description of the function)?
 *
 * Return: size of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(sizeof(list_t));

	if (!h || !new_head)
		return (NULL);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = _strlen(new_head->str);
	}

	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
