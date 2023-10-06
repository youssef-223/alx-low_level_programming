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
	int n = 48;

		while (n <= 102)
		{
			putchar(n);
			if (n == 57)
				n += 39;
			n++;
		}
		putchar('\n');
	return (0);
}
