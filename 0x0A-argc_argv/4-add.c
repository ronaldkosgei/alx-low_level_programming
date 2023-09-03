#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including program name)
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (int i = 1; i < argc; i++) {
for (int j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1); /* Return 1 to indicate an error*/
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
