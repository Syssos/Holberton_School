#ifndef DOG
#define DOG
/**
 * struct dog - dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: dog structure with 3 variables
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG */
