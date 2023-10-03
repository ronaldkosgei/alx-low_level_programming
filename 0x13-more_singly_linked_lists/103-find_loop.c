#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;
if (head == NULL)
return (NULL);
slow = head;
fast = head;
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
/* If there is a loop, they will eventually meet */
if (slow == fast)
{
/* Move one pointer back to the head and start again */
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
return (NULL);
}