#include <unistd.h>  /* Needed for the write function*/
/**
 * _putchar - Outputs a character to the standard output.
 * @c: The character to be output.
 *
 * Return: On success, returns the number of characters written.
 *         On error, returns -1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
