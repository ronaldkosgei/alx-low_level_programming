#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function is the entry point of the program and prints the name of
 * the source file it was compiled from.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
