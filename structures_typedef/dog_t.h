#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure représentant un chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
