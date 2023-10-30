#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Short description, single line
 * @str: param1
 *
 *
 * Description: Description
 *
 * Return: Return
 */
int _strlen(char *str)
{
	int size = 0;

	for (; str[size]; size++)
	;
	return (size);
}

/**
 * alloc_grid - Short description, single line
 * @width: param1
 * @height: param2
 *
 * Description: Description
 *
 * Return: Return
 */

int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			if (tab[i] == 0)
			{
				while (i--)
					free(tab[i]);
				free(tab);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				tab[i][j] = 0;
		}
	}
	return (tab);
}

