#ifndef KIDUS_225_TASK0
#define KIDUS_225_TASK0

/**
 * struct dog - Structure for storing dog information
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog ownder name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
