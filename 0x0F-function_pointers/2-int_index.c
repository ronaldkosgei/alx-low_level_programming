#include <stdio.h>

/**
 * int_index - Search for an integer in an array using a
 * custom comparison function.
 * @array: Pointer to the integer array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 * Return: Index of the first element for which cmp does not
 * return 0, or -1 if no match is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i; /* Declare i here*/
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1); /* Handle invalid input*/
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i); /* Found a match*/
}
}
return (-1); /* No match found*/
}
