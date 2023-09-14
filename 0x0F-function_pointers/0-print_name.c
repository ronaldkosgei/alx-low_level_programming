#include <stdio.h>

/**
 * print_name - Prints a name using a given printing function.
 * @name: The name to print.
 * @f: A function pointer that specifies how to print the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
