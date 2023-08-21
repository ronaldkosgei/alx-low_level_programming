#include <stdio.h>
#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */

int main(void)
{
int array[] = { 98, 402, -198, 298, -1024 };
int size = sizeof(array) / sizeof(array[0]);

print_array(array, size);

return (0);
}
