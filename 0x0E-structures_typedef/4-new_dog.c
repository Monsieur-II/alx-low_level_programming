#include <stdio.h>
#include <stdlib.h>

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);
    dog->name = name;
    dog->age = age;
    dog->owner = owner;
    return (dog);
}
int main()
{
    dog_t *myDog;

    myDog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", myDog->name, myDog->age);

    return (0);
}
