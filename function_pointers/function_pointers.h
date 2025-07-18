#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int (*get_op_func(char *s))(int, int);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* FUNCTION_POINTERS_H */
