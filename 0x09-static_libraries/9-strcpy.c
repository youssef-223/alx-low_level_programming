#include "main.h"
#include <stdio.h>

/**
 * * _strcpy - Prints the elements of an array
 * @dest: param1
 * @src: param2
 * Description: copy the string to  by pointer src to
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

