#include <unistd.h>
#include "holberton.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
write(1, &letter, 1);
letter++;
}
}
