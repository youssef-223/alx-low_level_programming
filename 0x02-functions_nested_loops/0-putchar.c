/**
 * main  - entry point
 *
 * Description: program entry point
 *
 * Return: alwasy success (0)
 */

#include "main.h"
#include <stdio.h>
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
