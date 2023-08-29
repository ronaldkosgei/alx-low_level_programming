/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
/* Loop through the memory areas */
for (i = 0; i < n; i++)
{
/* Copy each byte from source to destination */
dest[i] = src[i];
}
return (dest);
}
