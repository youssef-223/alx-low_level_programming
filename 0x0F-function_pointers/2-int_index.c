#include "function_pointers.h"

/**
 * int_index - Short description, single line
 * @array: param1
 * @cmp: param2
 * @size: param3
 * Description: Description
 *
 * Return: Return
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
