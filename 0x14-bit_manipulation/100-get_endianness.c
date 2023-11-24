#include "main.h"


/**
 * get_endianness - print linked list
 *
 * Return: int number
*/

int get_endianness(void)
{
	unsigned long int m = 1;

	return (*(char *)&m);
}

