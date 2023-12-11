#ifndef SEARCH_ALGO_
#define SEARCH_ALGO_
#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int l, int r, int *array);

#endif /*SEARCH_ALGO_*/
