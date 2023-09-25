#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current = *h;
listint_t *next_node;
while (current != NULL)
{
count++;
next_node = current->next;
free(current);
current = next_node;
/* Check for a circular reference */
if (current >= *h)
{
*h = NULL;
break;
}
}
*h = NULL;
return (count);
}
