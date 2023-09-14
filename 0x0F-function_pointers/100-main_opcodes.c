#include <stdio.h>
#include <stdlib.h>

/**
 * my_function - Example function to print the opcodes of
 */
void my_function(void)
{
/* Your code here */
printf("Hello, World!\n");
}
/**
 * print_opcodes - Prints the opcodes of a given function
 * @func: Pointer to the function
 * @num_bytes: Number of bytes to print
 */
void print_opcodes(void (*func)(void), int num_bytes)
{
unsigned char *address = (unsigned char *)func;
int i; /* Declare i outside the loop*/
if (num_bytes <= 0)
{
printf("Error\n");
exit(2);
}
printf("Address\t\tOpcode\n");
for (i = 0; i < num_bytes; i++)
{
printf("%p:\t\t%02x\n", (void *)(address + i), address[i]);
}
}
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 1 on incorrect number of arguments,
 * 2 on negative input
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int num_bytes = atoi(argv[1]);
if (num_bytes <= 0)
{
printf("Error\n");
return (2);
}
print_opcodes(my_function, num_bytes);
return (0);
}
