#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including program name)
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
(void)argv; /* Silence the unused parameter warning*/
printf("%d\n", argc - 1); /* Subtract 1 to exclude the program name*/
return (0);
}
