#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line
 * @str: The input string
 *
 * Description: This function prints the characters of the input string
 *              followed by a new line to the standard output (stdout).
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0') {
write(1, &str[i], 1);
i++;
}

write(1, "\n", 1);
}
