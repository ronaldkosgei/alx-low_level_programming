#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success, returns the character written as an unsigned char cast to an int.
 *         On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
