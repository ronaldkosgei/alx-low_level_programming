#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 *
 */
void reverse_array(int *a, int n);

int main(void)
{
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);
int i; /* Declare i outside the loop */

printf("Original Array: ");
for (i = 0; i < n; i++) /* Use i declared outside the loop */
{
printf("%d ", arr[i]);
}

reverse_array(arr, n);

printf("\nReversed Array: ");
for (i = 0; i < n; i++) /* Use i declared outside the loop */
{
printf("%d ", arr[i]);
}

return (0);
}
