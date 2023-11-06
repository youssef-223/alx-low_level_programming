#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name : name
 * @age : age
 * @owner : owner
 *
 * Description: Description
 *
 */

typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H  */
