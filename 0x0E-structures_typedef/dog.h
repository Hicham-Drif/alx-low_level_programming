#ifndef DOG_H
#define DOG_H



/**
* struct dog - Short description
* @name: First member char*
* @age: Second member float
* @owner: Third member char*
*
* Description: a structure of dog contain name, age and owner
*/
struct dog{
char * name;
float age;
char * owner
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
