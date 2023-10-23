#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Short description, single line
 * @a: param1
 * @size: param2
 *
 * Description: Description
 *
 * Return: Return
 */

void print_diagsums(int *a, int size)
{
	int s1, s2;
	int i;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - i - 1];
		a += size;
	}

	printf("%d, ", s1);
	printf("%d\n", s2);
}
