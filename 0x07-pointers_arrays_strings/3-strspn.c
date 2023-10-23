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
	unsigned int numOfBytes = 0;
	int i, j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				numOfBytes++;
			}
		}
	}
	return (numOfBytes);
}
