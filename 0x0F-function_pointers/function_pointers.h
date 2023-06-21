#ifndef function_pointers_H
#define function_pointers_H
#include <stddef.h>

int putchar(int c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif
