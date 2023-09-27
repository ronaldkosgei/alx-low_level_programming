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
const listint_t *current = head;
size_t count = 0;
while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;
if (current <= current->next)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
exit(98); /* Exit with status 98 if there's a loop in the list*/
}
current = current->next;
}
return (count);
}
