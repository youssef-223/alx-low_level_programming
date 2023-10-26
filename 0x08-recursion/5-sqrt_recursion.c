#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - Short description, single line
 * @n: param1
 * @val: param2
 * Description: Description
 *
 * Return: Return
 */


int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - Short description, single line
 * @n: param1
 * @val: param2
 * Description: Description
 *
 * Return: Return
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}

