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
	char n = 'a';

		while (n <= 'z')
		{
			if (n == 'q' || n == 'e')
			{
				n++;
			}
			putchar(n);
			n++;
		}
		putchar('\n');
	return (0);
}
