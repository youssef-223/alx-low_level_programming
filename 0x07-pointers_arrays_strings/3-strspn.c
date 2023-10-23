#include <stdio.h>

/**
 * _strspn - Short description, single line
 * @s: param1
 * @accept: param2
 *
 *
 * Description: Description
 *
 * Return: Return
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
