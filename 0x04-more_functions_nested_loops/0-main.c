#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c)); /* Print the result of _isupper for 'A' */
    
c = 'a';
printf("%c: %d\n", c, _isupper(c)); /* Print the result of _isupper for 'a' */

return (0);
}
