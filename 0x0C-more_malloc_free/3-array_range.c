#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Create an array of integers containing a range of values
 * @min: The minimum value (inclusive)
 * @max: The maximum value (inclusive)
 *
 * Return: A pointer to the newly created array containing values from
 * min to max
 * NULL if min is greater than max or if malloc fails
 */
int *array_range(int min, int max)
{
int *array;
int num_elements;
int i; /* Declare 'i' here*/
if (min > max)
{
return (NULL); /* Invalid input, return NULL */
}
num_elements = max - min + 1;
array = (int *)malloc(num_elements *sizeof(int));
if (array == NULL)
{
return (NULL); /* malloc failed, return NULL */
}
for (i = 0; i < num_elements; i++)
{
array[i] = min + i;
}
return (array);
}
