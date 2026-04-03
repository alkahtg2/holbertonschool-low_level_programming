#ifndef DOG_H
#define DOG_H

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
typedef struct dog dog_t;


#endif
