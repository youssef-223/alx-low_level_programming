#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - Short description, single line
 * @s: param1
 * @a: param2
 * Description: Description
 *
 * Return: Return
 */

int check_prime(int s, int a);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - Short description, single line
 * @s: param1
 * @a: param2
 *
 * Description: Description
 *
 * Return: Return
 */
int check_prime(int s, int a)
{
	if (a >= s && s > 1)
		return (1);
	else if (s % a == 0 || s <= 1)
		return (0);
else
	return (check_prime(s, a + 1));
}

