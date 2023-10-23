#include <stdio.h>

/**
 * _strchr - Short description, single line
 * @s: param1
 * @c: param2
 * 
 *
 * Description: Description
 *
 * Return: Return
 */

char *_strchr(char *s, char c)
{
	int i;
	
	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
