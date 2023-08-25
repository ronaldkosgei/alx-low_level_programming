#include <stdbool.h>
#include <stddef.h>
#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *str);
bool is_separator(char c);
char *cap_string(char *str);
void leet_encode(char *str);
char *leet(char *str);
void rot13_encode(char *str);
char *rot13(char *str);
void print_buffer(const char *b, size_t size);
char *add_strings(const char *n1, const char *n2, char *r, size_t size_r);
void print_number(int n);
int _putchar(char c);

#endif /* MAIN_H */
