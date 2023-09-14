#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints a variable number of integers with a separator.
 * @separator: The string to be printed between numbers. Can be NULL.
 * @n: The number of integers passed to the function.
 * @...: The integers to be printed.
 *
 * Description: This function prints a given number of integers, separated by
 * the specified separator. If the separator is NULL, it won't be printed.
 * A new line is printed at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; ++i)
{
int num = va_arg(args, int);
printf("%d", num);
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
