#include <stdio.h>


/**
 * main - Short description, single line
 * @argc: param1
 * @argv: param2
 *
 * Description: Description
 *
 * Return: Return
 */
int main(int argc, char const *argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i])
		i++;
	}

	return (0);
}

