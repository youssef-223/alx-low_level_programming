#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an array
 * @a: The array to be printed
 * @n: The number of elements in the array
 */
void print_array(int *a, int n)
{
	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}
		}

		printf("\n");  /* Print a newline after the array. */
	}
}
