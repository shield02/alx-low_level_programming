#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: stuct dog variable
 * @name: char variable
 * @age: float variable
 * @owner: char variable
 *
 * Description: This function initializes a variable of type struct dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

