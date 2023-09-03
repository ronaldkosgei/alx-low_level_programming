char *_strncat(char *dest, char *src, int n)
{
char *dest_start = dest;
while (*dest)
dest++;
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (dest_start);
}
