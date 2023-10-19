#include "main.h"
#include <stdio.h>

/**
 * * _strcat - Prints the elements of an array
 * @dest: param1
 * @src: param2
 * Description: copy the string to  by pointer src to
 *Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];

		i++;
		j++;
	}

	dest[i] = '\0';

	return (src);
}

