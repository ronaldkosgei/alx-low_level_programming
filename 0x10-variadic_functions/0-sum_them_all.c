#include <stdarg.h>

/**
 * sum_them_all - Sums all its parameters.
 * @n: The number of parameters to sum.
 * @...: The variable number of parameters to sum.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum = 0;
unsigned int i;
if (n == 0)
{
return (0);
}
va_start(args, n);
for (i = 0; i < n; ++i)
{
int num = va_arg(args, int);
sum += num;
}
va_end(args);
return (sum);
}
