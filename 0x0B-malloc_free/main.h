#ifndef MAIN_H
#define MAIN_H
void _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void rollback(int **arr, int size);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
unsigned int s_len(char *s);
unsigned int s_cat_nl(char *dst, char *src, unsigned int start);
char **strtow(char *str);
int count_chars(char *s);
void s_rollback(char **arr, int size);
unsigned int count_words(char *str);
#endif
