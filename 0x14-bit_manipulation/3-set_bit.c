#include "main.h"


/**
 * set_bit - print linked list
 * @n: param1
 * @index: param2
 * Return: int number
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}

