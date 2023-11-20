#include "lists.h"


/**
 * pop_listint - print linked list
 * @head: param1
 *
 * Return: Size of list
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
