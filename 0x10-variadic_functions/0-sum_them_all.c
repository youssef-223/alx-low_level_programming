#include "function_pointers.h"

/**
 * sum_them_all - Short description, single line
 * @n: param1
 * @...: param2
 *
 * Description: Description
 *
 * Return: Return
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
