/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Description: This function takes two pointers to integers and swaps the values
 *              of the integers they point to.
 */
void swap_int(int *a, int *b)
{
int temp = *a;  /* Store the value of a in a temporary variable */
*a = *b;        /* Assign the value of b to a */
*b = temp;      /* Assign the temporary value (original a) to b */
}
