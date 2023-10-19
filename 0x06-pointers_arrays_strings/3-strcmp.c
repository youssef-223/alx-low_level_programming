#include "main.h"
#include <stdio.h>

/**
 * * _strcmp - Prints the elements of an array
 * @s1: param1
 * @s2: param2
 * Description: copy the string to  by pointer src to
 *Return: pointer to dest
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i] ; i++)
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}

	}

	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}

	return (0);
}

