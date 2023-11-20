#include "lists.h"


/**
 * free_listint - print linked list
 * @head: param1
 *
 * Return: Size of list
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
