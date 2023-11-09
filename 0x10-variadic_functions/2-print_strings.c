#include "variadic_functions.h"


/**
 * print_strings - Short description, single line
 * @separator: param1
 * @n: param2
 * @...: param3
 *
 * Description: Description
 *
 * Return: Return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
