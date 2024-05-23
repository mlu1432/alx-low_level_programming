#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stddef.h>  /* size_t */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int recursive_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_helper(int *array, size_t left, size_t right, int value);
void print_array(int *array, size_t left, size_t right);
int recursive_binary(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
