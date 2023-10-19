#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - reverse the elements of an array
 * @a: param1
 * Description: reverse the elements of an array
 *Return: void
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i]; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			/* Convert lowercase letter to uppercase */
			a[i] = a[i] - 32;
		}
	}

	return (a);
}

