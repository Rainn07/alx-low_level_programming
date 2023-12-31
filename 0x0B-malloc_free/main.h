#ifndef MAIN_H
#define MAIN_H

/* main.h
 * Jaxn
 * Header file
 * 0x0B-malloc_free
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
#endif
