#ifndef DOG_H_FILE
#define DOG_H_FILE

/**
 * struct dog - structure definition of a dog
 * @name: dog name
 * @age: dog age
 * @owner: The owner of the dog.
 */

struct dog
{
	char name;
	float age;
	char owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t new_dog(char name, float age, char owner);
void free_dog(dog_t d);

#endif  _DOG_H_

