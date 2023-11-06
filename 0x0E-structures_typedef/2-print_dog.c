#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Short description, single line
 * @d: param1
 * Description: Description
 *
 * Return: Return
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ", (*d).name ? (*d).name : "(nil)")
		printf("Age: ", (*d).age)
		printf("Owner: ", (*d).owner ? (*d).owner : "(nil)")
	}


}
