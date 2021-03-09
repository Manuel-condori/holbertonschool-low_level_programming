#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - struct for dog
 * @name: type char
 * @age: float type
 * @owner: char type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * prototypes
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
