#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character to standart output
 *@c: The character to be written
 *
 * Return: on success (0)
 *	on failure (1)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
