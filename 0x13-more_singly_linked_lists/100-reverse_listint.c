#include "lists.h"


/**
 * reverse_listint - print linked list
 * @head: param1
 *
 * Return: address of the inserted node
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
