#include "function_pointers.h"

/**
 * array_iterator - Short description, single line
 * @array: param1
 * @action: param2
 * @size: param3
 * Description: Description
 *
 * Return: Return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
