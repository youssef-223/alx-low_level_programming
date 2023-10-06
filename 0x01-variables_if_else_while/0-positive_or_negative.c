#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main  - entry point
 *
 * Description: program entry point
 *
 * Return: alwasy success (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n > 0)
		{
			printf("is positive");
		}
		if (n == 0)
		{
			printf("is zero");
		}
		if (n < 0)
		{
			printf("is negative");
		}
	return (0);
}
