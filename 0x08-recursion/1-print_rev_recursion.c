#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - Short description, single line
 * @s: param1
 *
 * Description: Description
 *
 * Return: Return
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
