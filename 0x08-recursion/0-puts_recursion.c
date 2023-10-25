#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - Short description, single line
 * @s: param1
 *
 * Description: Description
 *
 * Return: Return
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
