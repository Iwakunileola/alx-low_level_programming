#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @*d: Pointer to type struct dog
 * @name: member of struct dog
 * @age: memeber of struct dog
 * @owner: memeber of struct dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog
	{
		char *name;
		float age;
		char *owner;
	}pt;

	d = &pt;

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
