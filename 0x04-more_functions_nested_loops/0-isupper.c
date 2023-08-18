#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1); /* Return 1 if c is uppercase */
else
return (0); /* Return 0 if c is not uppercase */
}
