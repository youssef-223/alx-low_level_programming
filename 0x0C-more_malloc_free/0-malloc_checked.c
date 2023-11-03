#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Short description, single line
 * @b: param1
 *
 * Description: Description
 *
 * Return: Return
 */

void *malloc_checked(unsigned int b)
{
    int *ptr = malloc(b);

    if (ptr == 0)
		exit(98);

        return (ptr);
}
