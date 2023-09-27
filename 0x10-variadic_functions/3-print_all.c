#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints arguments based on the provided format string.
 * @format: A string containing format specifiers.
 *
 * Description: The function takes a format string and a variable
 * number of arguments. It iterates through the format string and
 * prints the corresponding arguments based on the format specifiers.
 * Supported specifiers:
 * - 'c' for char
 * - 'i' for integer
 * - 'f' for float
 * - 's' for string (if NULL, prints "(nil)")
 *
 * Return: No return value (void).
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *str;
char separator = ',';
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", (float)va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
separator = 0; /* Don't print a separator if format is invalid*/
break;
}
if (format[i + 1] && separator)
printf("%c ", separator);
i++;
}
printf("\n");
va_end(args);
}
