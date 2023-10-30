#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Short description, single line
 * @str: param1
 *
 *
 * Description: Description
 *
 * Return: Return
 */
int _strlen(char *str)
{
	int size = 0;

	for (; str[size]; size++)
	;
	return (size);
}

/**
 * str_concat - Short description, single line
 * @s1: param1
 * @s1: param2
 *
 * Description: Description
 *
 * Return: Return
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *m;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	m = malloc((size1 + size2) * sizeof(char) + 1);

	if (m == 0)
		return (NULL);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}

