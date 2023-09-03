#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including program name)
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(void) {
int count = 0;
while (*(__argv + count))
{
count++;
}
printf("%d\n", count - 1);
/* Subtract 1 to exclude the program name*/
return (0);
}
