#include <stdio.h>

/**
 * _memcpy - Short description, single line
 * @dest: param1
 * @src: param2
 * @n: param3
 *
 * Description: Description
 *
 * Return: Return
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
