#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Short description, single line
 * @b: param1
 * Description: Description
 *
 * Return: Return
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
	{
		exit(98);
	}
	return (m);
}
