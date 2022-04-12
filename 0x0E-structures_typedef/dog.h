#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 * @name: First element
 * @age: Second element
 * @owner: Third element
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif
