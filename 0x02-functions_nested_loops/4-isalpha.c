#include "main.h"

#include <stdio.h>

/**
 * _isalpha - _isalpha
 * @c : paramter
 *
 * Return: (1) if error
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
