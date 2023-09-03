int _atoi(char *s)
{
int result = 0;
int sign = 1;
while (*s)
{
if (*s == '-')
{
sign = -1;
}
else if (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
}
else
{
break; /* Stop at the first non-digit character */
}
s++;
}
return (result * sign);
}
