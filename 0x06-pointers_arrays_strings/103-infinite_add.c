#include <string.h>
#include <stdio.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
/**
 * add_strings - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result stored in the buffer.
 */
char *add_strings(const char *n1, const char *n2, char *r, size_t size_r)
{
int carry = 0;
int index_r = size_r - 1;
int index_n1 = strlen(n1) - 1;
int index_n2 = strlen(n2) - 1;
while (index_n1 >= 0 || index_n2 >= 0 || carry)
{
int digit_n1 = index_n1 >= 0 ? n1[index_n1] - '0' : 0;
int digit_n2 = index_n2 >= 0 ? n2[index_n2] - '0' : 0;
int sum = digit_n1 + digit_n2 + carry;
carry = sum / 10;
if (index_r >= 0)
{
r[index_r] = (sum % 10) + '0';
index_r--;
}
else
{
/* If the result overflows the buffer, you can handle it as needed. */
/* For this example, we're ignoring overflow. */
}
if (index_n1 >= 0)
{
index_n1--;
}
if (index_n2 >= 0)
{
index_n2--;
}
}
return (r + index_r + 1);
}
