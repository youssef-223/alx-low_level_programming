#include "main.h"
#include <stdio.h>
/**
 * *isLower - reverse the elements of an array
 * @c: param1
 * Description: reverse the elements of an array
 *Return: pointer to character
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * *isDelimiter - reverse the elements of an array
 * @c: param1
 * Description: reverse the elements of an array
 *Return: pointer to character
 */
int isDelimiter(char c)
{
	int i;
	char delimter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimter[i])
			return (1);
	return (0);
}

/**
 * *cap_string - reverse the elements of an array
 * @s: param1
 * Description: reverse the elements of an array
 *Return: pointer to character
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1'
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}

