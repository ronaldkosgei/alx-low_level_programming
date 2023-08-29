/**
 * _memset - Fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte value to fill the memory with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
/* Loop through the memory area */
for (i = 0; i < n; i++)
{
/* Set each byte to the constant value */
s[i] = b;
}
return (s);
}
