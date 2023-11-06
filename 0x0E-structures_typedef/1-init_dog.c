#include "dog.h"

/**
 * init_dog - Short description, single line
 * @*d: param1
 * @*age: param2
 * @*owner: param2
 * Description: Description
 *
 * Return: Return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

}
