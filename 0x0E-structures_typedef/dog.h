#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog types
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Desc: define dog type
 */

typedef struct dog
{
        char *name;
        float age;
        char *owner;
} dog_t;

#endif 
