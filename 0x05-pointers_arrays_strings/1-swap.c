#include "main.h"

/**
 * swap_int - alx project
 *
 * @a: int param1
 * @b: int param2
 *
 * Return: nothing
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
