#include <stdio.h>

/**
 * leet_encode - Encodes a string into leet speak.
 * @str: The input string to be encoded.
 */
void leet_encode(char *str) {
char *leet_chars = "aAeEoOtTlL";
char *leet_replacements = "4437007711";
int i;/* Declare i before the loop */
for (i = 0; str[i] != '\0'; i++) {
char *found = leet_chars;
while (*found != '\0') {
if (str[i] == *found) {
str[i] = leet_replacements[found - leet_chars];
break;
}
found++;
}
}
}
