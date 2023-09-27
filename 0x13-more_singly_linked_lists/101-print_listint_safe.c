#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow_ptr = head;
const listint_t *fast_ptr = head;
size_t count = 0;
while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
{
printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
count++;
slow_ptr = slow_ptr->next;
fast_ptr = fast_ptr->next->next;
if (slow_ptr == fast_ptr)
{
printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
exit(98);/* Exit with status 98 if a loop is detected*/
}
}
return (count);
}
