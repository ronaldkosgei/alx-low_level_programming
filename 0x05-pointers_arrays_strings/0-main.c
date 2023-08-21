#include <stdio.h>
#include "main.h"

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
int num = 42;
printf("Before reset: %d\n", num);

reset_to_98(&num);

printf("After reset: %d\n", num);

return 0;
}
