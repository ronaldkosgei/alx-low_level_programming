#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
char source[] = "Hello, world!";
char destination[20];

_strcpy(destination, source);

printf("Source: %s\n", source);
printf("Destination: %s\n", destination);

return (0);
}
