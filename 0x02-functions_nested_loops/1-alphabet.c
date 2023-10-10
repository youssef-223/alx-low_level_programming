#include "main.h"

#include <stdio.h>

/**
 * print_alphabet - writes character to standart output
 *
 *
 * Return: on success (0)
 *      on failure (1)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
