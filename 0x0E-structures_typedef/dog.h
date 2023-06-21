#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure information of a dog
 * @name: name of a dog
 * @age: the age of the dog
 * @owner: the dog's owner
 *
 * Description: basic information about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for structure information of a dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
