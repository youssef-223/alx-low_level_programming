#include "variadic_functions.h"

/**
 * sum_them_all - Sum a variable number of integers.
 * @n: The number of integers to sum.
 * @...: The integers to be summed.
 *
 * Return: The sum of the integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
		return(0);

	va_start(ap, n);

	while(i--) 
	{
		s += va_arg(ap, int);
	}
	va_end(ap);
	return (s);
}

