#include <stdio.h>

/**
 * array_iterator - Apply a function to each element of an integer array.
 * @array: Pointer to the integer array.
 * @size: Size of the array.
 * @action: Pointer to the function to apply to each element.
 *
 * Description: This function iterates through the given integer array
 * and applies the specified action function to each element.
 * If either the array or action function is NULL, it does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i; /* Declare i here */
if (array == NULL || action == NULL)
{
return; /* Handle invalid input */
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
/**
 * print_int - Print an integer.
 * @x: The integer to print.
 *
 * Description: This is an example action function that prints an integer.
 */
void print_int(int x)
{
printf("%d ", x);
}
