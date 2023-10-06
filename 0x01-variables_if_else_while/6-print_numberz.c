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
	int n = 0;

		while (n <= 9)
		{
			putchar(n + '0');
			n++;
		}
		putchar('\n');
	return (0);
}
