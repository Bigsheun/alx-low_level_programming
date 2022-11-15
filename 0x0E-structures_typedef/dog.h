#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - structure dog
 * @name: atribute dog's name string
 * @age: atribute dog's age float
 * @owner: atribute dog's owner string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
