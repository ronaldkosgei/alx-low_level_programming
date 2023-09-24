#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
list_t *head = NULL;
list_t *new_node = NULL;
/* Allocate memory for a new node*/
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
fprintf(stderr, "Error\n");
return (1);
}
/* Initialize the new node*/
new_node->str = strdup("Hello");
new_node->len = 5;
new_node->next = head;
/* Update the head to point to the new node*/
head = new_node;
/* Call the list_len function to count and print the number of elements*/
size_t n = list_len(head);
printf("-> %lu elements\n", n);
/* Free the allocated memory for the new node*/
free(new_node->str);
free(new_node);
return (0);
}
