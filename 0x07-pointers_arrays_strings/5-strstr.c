#include <stdio.h>

/**
 * _strstr - Short description, single line
 * @haystack: param1
 * @needle: param2
 *
 *
 * Description: Description
 *
 * Return: Return
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	int start = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (haystack[i] == needle[j])
		{
			start = i;
			j++;
		}
	}

	if (j == 0)
		return (0);

	return (&haystack[i]);
}

