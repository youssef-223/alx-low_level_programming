#include "lists.h"


/**
 * free_listint - print linked list
 * @head: param1
 *
 * Return: Size of list
*/

void free_listint(listint_t *head)
{
	listint_t *node, *temp;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
