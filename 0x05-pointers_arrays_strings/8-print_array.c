#include <stdio.h>

/**
 * print_array - Print n elements of an array of integers,
 * followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 */
void print_array(int *a, int n)
{
if (a == NULL || n <= 0)
{
return; /* Nothing to print */
}

for (int i = 0; i < n; i++) {
printf("%d", a[i]);

if (i != n - 1) {
printf(", "); /* Print comma and space if it's not the last element */
}
}

printf("\n"); /* Print a new line after printing the elements */
}

int main(void)
{
int numbers[] = {10, 20, 30, 40, 50};
int size = sizeof(numbers) / sizeof(numbers[0]);

print_array(numbers, size);

return (0);
}
