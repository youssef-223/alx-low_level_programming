#include "main.h"

/**
 * rev_string - Reverses a string in-place.
 *
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0, i;
	char temp;

	for (length = 0; s[length] != '\0'; ++length)
		;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}

