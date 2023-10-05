/**
 * main  - entry point
 *
 * Description: program entry point
 *
 * Return: alwasy success (0)
 */

#include <stdio.h>
int main(void)
{
	printf("Size of a char: %c byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %li  byte(s)", sizeof(long int));
	printf("Size of a long long int: %lli  byte(s) ", sizeof(long long int));
	printf("Size of a float: %f byte(s)", sizeof(float));
	return (0);
}
