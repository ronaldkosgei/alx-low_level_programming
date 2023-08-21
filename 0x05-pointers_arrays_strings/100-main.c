#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _atoi(char *s); /* Function prototype  */

int main(void)
{
char s1[] = "123";
char s2[] = "-456";
char s3[] = "   +789";
char s4[] = "99999999999";

printf("%d\n", _atoi(s1));
printf("%d\n", _atoi(s2));
printf("%d\n", _atoi(s3));
printf("%d\n", _atoi(s4));

return (0);
}
