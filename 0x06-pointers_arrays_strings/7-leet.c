#include "main.h"
#include <stdio.h>

/**
 * *leet - reverse the elements of an array
 * @s: param1
 * Description: reverse the elements of an array
 *Return: pointer to character
 */
char *leet(char *s)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
	c++;
	}
	return (cp);
}


