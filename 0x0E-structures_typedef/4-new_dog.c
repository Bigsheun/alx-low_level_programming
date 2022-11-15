#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create a new dog
 * @name: name's dog
 * @age: age
 * @owner: owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *n_dog;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(i * sizeof(n_dog->name));
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n_dog->name[k] = name[k];
	n_dog->age = age;
	n_dog->owner = malloc(j * sizeof(n_dog->owner));
	if (n_dog->owner == NULL)
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		n_dog->owner[k] = owner[k];

	return (n_dog);
}
