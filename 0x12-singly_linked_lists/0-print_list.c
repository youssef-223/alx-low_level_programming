#include "lists.h"

/**
 * _strlen - Short description, single line
 * @s: Description of parameter s
 *
 * Description: Longer description of the function)?
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int itterator = 0;

	if (!s)
		return (0);
	while (*s++)
		itterator++;
	return (itterator);
}

/**
 * print_list - Short description, single line
 * @h: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

