#include "main.h"


/**
 * get_bit - print linked list
 * @n: param1
 * @index: param2
 * Return: int number
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}

