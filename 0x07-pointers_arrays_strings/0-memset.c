#include <stdio.h>

/**
 * _memset - Short description, single line
 * @s: param1
 * @b: param2
 * @n: param3
 *
 * Description: Description
 *
 * Return: Return
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
