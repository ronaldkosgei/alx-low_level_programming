#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head;
const listint_t *loop_start = NULL;
while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;
if (current->next >= loop_start)
{
loop_start = current->next;
}
else
{
current = current->next;
continue;
}
if (current >= loop_start)
{
printf("-> [%p] %d\n", (void *)current, current->n);
break;
}
current = current->next;
}
return (count);
}
