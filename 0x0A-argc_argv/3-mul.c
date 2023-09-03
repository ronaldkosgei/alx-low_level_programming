#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including program name)
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
double num1, num2, product;
if (argc != 3)
{
printf("Error\n");
return (1); /* Return 1 to indicate an error*/
}
num1 = atof(argv[1]);
num2 = atof(argv[2]);
product = num1 * num2;
printf("%.0f\n", product); /* Print the product as an integer */
return (0);
}
