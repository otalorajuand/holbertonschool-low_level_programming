#ifndef _MAIN_H_
#define _MAIN_H_

void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* _MAIN_H_ */
