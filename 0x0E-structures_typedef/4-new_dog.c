#include "dog.h"
#include <stdio.h>


/**
 * _strlen - Short description, single line
 * @str: param1
 * Description: Description
 *
 * Return: Return
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}


/**
 * _strcpy - Short description, single line
 * @src: param1
 * @dest: param1
 * Description: Description
 *
 * Return: Return
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}


/**
 * new_dog - Short description, single line
 * @name: param1
 * @age: param1
 * @owner: param1
 * Description: Description
 *
 * Return: Return
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_T *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (og == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
