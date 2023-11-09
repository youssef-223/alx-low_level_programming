#include "variadic_functions.h"
#include <stdarg.h>  // Ensure you include the necessary header

/**
 * sum_them_all - Sum a variable number of integers.
 * @n: The number of integers to sum.
 * @...: The integers to be summed.
 *
 * Return: The sum of the integers.
 */

int sum_them_all(const unsigned int n, ...)
{
    int s = 0;
    va_list ap;

    if (n == 0) {
        return 0; // Consider adding error handling or a distinct error value.
    }

    va_start(ap, n);
    for (unsigned int i = 0; i < n; i++) {
        s += va_arg(ap, int);
    }
    va_end(ap);

    return s;
}

