#include "main.h"
#include <stdio.h>

/**
 * * _strncpy - Prints the elements of an array
 * @dest: param1
 * @src: param2
 * @n: param3
 * Description: copy the string to  by pointer src to
 *Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

