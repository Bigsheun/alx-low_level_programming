#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *set_mem(char *s, char c, unsigned int n);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmedb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int c_atoi(char c);
int is_number(char *num_str);
void *mul_array(char *a1, int len1, char a2, char *a3, int lena);
void print_array(char *a, int nb);
#endif

