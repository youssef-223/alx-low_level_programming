#include "lists.h"


/**
 * sum_listint - print linked list
 * @head: param1
 *
 * Return: Size of list
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
