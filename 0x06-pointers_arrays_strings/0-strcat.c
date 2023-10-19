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
	int i, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	while (dest[j] != '\0')
	{
		src[i] = dest[j];

		i++;
		j++;
	}

	src[i] = '\0';

	return (src);
}

