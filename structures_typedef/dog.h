#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - A structure for a dog data
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner name.
 *
 * Description: In this structure we specify the dogs data
 * like his name, his age and his owners name.
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

#endif /* _DOG_H_ */
