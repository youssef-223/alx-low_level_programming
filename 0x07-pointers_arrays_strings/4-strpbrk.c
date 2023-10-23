#include <stdio.h>

/**
 * _strpbrk - Short description, single line
 * @s: param1
 * @accept: param2
 *
 *
 * Description: Description
 *
 * Return: Return
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
	}
	return (0);
}

