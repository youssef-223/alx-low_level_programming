#include "main.h"

/**
 * _strlen - Computes the length of a string.
 *
 * @s: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
		int counter = 0;

		while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}

/**
 * append_text_to_file - print linked list
 * @filename: param1
 * @text_content: param2
 *
 * Return: int number
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}

