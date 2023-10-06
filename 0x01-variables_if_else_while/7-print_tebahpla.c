#include <stdio.h>

/**
 * main  - entry point
 *
 * Description: program entry point
 *
 * Return: alwasy success (0)
 */
int main(void)
{
	char n = 'z';

		while (n <= 'a')
		{
			putchar(n);
			n--;
		}
		putchar('\n');
	return (0);
}
