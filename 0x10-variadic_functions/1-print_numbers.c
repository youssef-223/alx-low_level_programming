#include "variadic_functions.h"


/**
 * print_numbers - Short description, single line
 * @separator: param1
 * @n: param2
 * @...: param3
 *
 * Description: Description
 *
 * Return: Return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int), i ? (seperator ? seperator : "") : "\n");
	va_end(ap);
}
