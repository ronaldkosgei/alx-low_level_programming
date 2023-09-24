#ifndef LIST_H
#define LIST_H
#include <stddef.h>

/**
 * struct list_s - A structure representing a node in a singly-linked list.
 * @str: The string stored in the node.
 * @len: The length of the string.
 * @next: A pointer to the next node in the list.
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif /* LIST_H */
