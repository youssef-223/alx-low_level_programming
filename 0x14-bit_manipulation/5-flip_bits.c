#include "main.h"


/**
 * flip_bits - print linked list
 * @n: param1
 * @m: param2
 * Return: int number
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1UL)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}

