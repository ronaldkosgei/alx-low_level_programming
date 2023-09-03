#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including program name)
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
return (0);
}
else
{
fprintf(stderr, "Error: No program name provided.\n");
return (1);
}
}
