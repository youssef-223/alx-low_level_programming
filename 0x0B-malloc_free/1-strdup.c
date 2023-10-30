#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - Short description, single line
 * @str: param1
 *
 *
 * Description: Description
 *
 * Return: Return
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size]; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m != 0)
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	else
		return (NULL);
	return (m);
}

