#include <stdbool.h>
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

#endif /* MAIN_H */
