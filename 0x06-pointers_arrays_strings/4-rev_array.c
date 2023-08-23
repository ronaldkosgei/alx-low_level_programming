#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 *
 * Description: This function reverses the content of the array of integers
 * pointed to by 'a'. 'n' indicates the number of elements in the array.
 */
void reverse_array(int *a, int n)
{
int temp;
int start = 0;
int end = n - 1;
while (start < end)
{
/* Swap the elements at the start and end indices */
temp = a[start];
a[start] = a[end];
a[end] = temp;
/* Move the indices towards the center of the array */
start++;
end--;
}
}
/**
 * Main - Entry point.
 *
 * Description: Demonstrates how to use the reverse_array
 * Return Always (0)
 */
int main(void)
{
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
int n = sizeof(arr) / sizeof(arr[0]);

printf("Original Array: ");
for (int i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
printf("\n");

reverse_array(arr, n);

printf("Reversed Array: ");
for (int i = 0; i < n; i++)
{
printf("%d ", arr[i]);
}
printf("\n");

return (0);
}
