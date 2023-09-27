#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list and sets
 * the head to NULL.
 * @h: Pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;/* Initialize a counter to keep track of the number of nodes*/
listint_t *current, *next_node;
current = *h;/* Initialize current as the head of the list*/
while (current != NULL)
{
next_node = current->next;
/* Store the next node before freeing the current node*/
free(current);/*Free the current node*/
current = next_node;/* Move to the next node*/
count++;
}
*h = NULL;/* Set the head to NULL after freeing all nodes*/
return (count);
}
