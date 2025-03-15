#ifndef DOG_H
#define DOG_H

/**
* struct dog - Structure that defines a dog's basic information
* @name: The name of the dog (string)
* @age: The age of the dog (float)
* @owner: The owner of the dog (string)
*
* Description: This structure stores information about a dog,
* including its name, age, and owner's name.
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




#endif /* DOG_H */
