#include <stdio.h>

/**
 * rev_string - Reverses a string in place
 * @s: The input string
 *
 * Description: This function takes a string as input and reverses it
 *              in place by swapping characters from the start and end.
 */
void rev_string(char *s)
{
int length = 0;
int start = 0;
int end;

/* Calculate the length of the string */
while (s[length] != '\0')
{
length++;
}

end = length - 1;

/* Reverse the string by swapping characters from the start and end */
while (start < end)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;

start++;
end--;
}
}
