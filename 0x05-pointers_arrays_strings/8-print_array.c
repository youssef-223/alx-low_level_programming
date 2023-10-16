#include "main.h"

/**
 * print_array - alx project
 *
 * @a: int param1
 * @n: int param2
 *
 * Return: void
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
}
