#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list and sets the head to NULL.
 * @h: Pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *temp;
if (h == NULL || *h == NULL)
return (0); /* Return 0 if the list is already empty or if h is NULL*/
current = *h;
while (current != NULL)
{
temp = current->next;
free(current);
current = temp;
count++;
if (current == *h)/* Detect a loop and break out of the loop safely*/
{
*h = NULL;
break;
}
}
return (count);
}
