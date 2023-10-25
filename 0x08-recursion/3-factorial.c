#include <stdio.h>
#include "main.h"
/**
 * factorial - Short description, single line
 * @n: param1
 *
 * Description: Description
 *
 * Return: Return
 */

int factorial(int n)
{
	if (n == 0)
		return (0);

	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}

