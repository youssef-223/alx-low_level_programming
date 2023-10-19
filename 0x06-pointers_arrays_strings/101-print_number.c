#include "main.h"
#include <stdio.h>

/**
 * print_number - reverse the elements of an array
 * @n: param1
 * Description: reverse the elements of an array
 *Return: pointer to character
 */
void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
