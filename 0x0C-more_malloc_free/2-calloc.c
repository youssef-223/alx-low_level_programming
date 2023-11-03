#include <stdio.h>
#include <stdlib.h>


/**
 * _memset - Short description, single line
 * @s: param1
 * @b: param2
 * @n: param3
 * Description: Description
 *
 * Return: Return
 */
 
 
 char *_memset(char *s, char b, unsigned int n)
 {
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
 }
/**
 * string_nconcat - Short description, single line
 * @s1: param1
 * @s2: param2
 * @n: param3
 * Description: Description
 *
 * Return: Return
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size ==0 || nmemb ==0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if ( m == 0)
		retur (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
