#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */
int main()
{
char str[] = "Hello, World! This is a Test String.";
char *ptr; /* Declare ptr here */
    
printf("Original: %s\n", str);
    
ptr = string_toupper(str); /* Assign a value to ptr */
    
printf("Uppercase: %s\n", ptr);
    
return (0);
}
