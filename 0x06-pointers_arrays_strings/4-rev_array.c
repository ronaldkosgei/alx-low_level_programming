#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;

while (start < end)
{
/* Swap elements at start and end indices */
int temp = a[start];
a[start] = a[end];
a[end] = temp;

/* Move indices towards each other */
start++;
end--;
}
}
