#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the elements of an array
 * @a: param1
 * @n: param2
 * Description: reverse the elements of an array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j++)
	{
		t = a[i];
		a[i] = [j];
		a[j] = t;
	}
}

