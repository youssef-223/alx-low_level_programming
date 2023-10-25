#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - Short description, single line
 * @x: param1
 * @y: param2
 *
 * Description: Description
 *
 * Return: Return
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

