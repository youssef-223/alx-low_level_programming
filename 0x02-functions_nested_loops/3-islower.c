#include "main.h"

#include <stdio.h>

/**
 * _islower - _islower
 * @c : paramter
 *
 * Return: success (0)
 *		error (1)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
