#include <stddef.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t node_count = 0;
listint_t *current = *h;
listint_t *next;
while (current != NULL)
{
next = current->next;
node_count++;
free(current);
current = next;
/* Check if we've reached the original head again (loop detected) */
if (current == *h)
{
*h = NULL; /* Set the head to NULL to indicate a loop */
break;
}
}
return (node_count);
}
