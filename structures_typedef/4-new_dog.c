#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog structure, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    new_dog = malloc(sizeof(dog_t)); // allocate memory for the new dog structure
    if (new_dog == NULL) // check if memory allocation was successful
        return (NULL);

    new_dog->name = malloc(strlen(name) + 1); // allocate memory for the name string
    if (new_dog->name == NULL) { // check if memory allocation was successful
        free(new_dog);
        return (NULL);
    }

    new_dog->owner = malloc(strlen(owner) + 1); // allocate memory for the owner string
    if (new_dog->owner == NULL) { // check if memory allocation was successful
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }

strcpy(new_dog->name, name); // copy the name string to the new dog structure
new_dog->age = age; // assign the age to the new dog structure
strcpy(new_dog->owner, owner); // copy the owner string to the new dog structure
return (new_dog); // return a pointer to the new dog structure
}
