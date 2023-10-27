#include "main.h"
#include <stdio.h>

/**
 * * _strncat - Prints the elements of an array
 * @dest: param1
 * @src: param2
 * @n: param3
 * Description: copy the string to  by pointer src to
 *Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}

