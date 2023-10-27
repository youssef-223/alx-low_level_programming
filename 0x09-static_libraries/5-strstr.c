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
			if (j == 0)
				start = i;
			j++;
			i++;
		}

		if (needle[j] != '\0')
			j = 0;
		else
			return (&haystack[start]);
	}

	return (NULL);
}
