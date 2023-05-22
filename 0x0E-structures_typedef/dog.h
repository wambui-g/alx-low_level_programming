#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog- dog attributes
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Desc: dog attributes
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t- typedef for struct
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
