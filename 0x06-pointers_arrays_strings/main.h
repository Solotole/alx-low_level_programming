#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
void print_number(int n);
char *leet(char *s);
char *rot13(char *s);
char *cap_string(char *str);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

#endif
