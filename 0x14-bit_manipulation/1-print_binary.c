#include "main.h"


/**
 * get_bit - print linked list
 * @n: param1
 * @index: param2
 * Return: int number
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit + sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & 1l << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}

