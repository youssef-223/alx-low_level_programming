#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Short description, single line
 * @name: param1
 * @f: param2
 * Description: Description
 *
 * Return: Return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
