#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - Short description, single line
 * @size: param1
 * @c: param2
 *
 * Description: Description
 *
 * Return: Return
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}

