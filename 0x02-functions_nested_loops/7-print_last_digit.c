#include "main.h"

#include <stdio.h>

/**
 * print_last_digit - _abs
 *@n: paramter
 *
 * Return: 1 if error
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);

}
