#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints a variable number of strings with a separator.
 * @separator: The string to be printed between strings. Can be NULL.
 * @n: The number of strings passed to the function.
 * @...: The strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; ++i)
{
const char *str = va_arg(args, const char *);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
