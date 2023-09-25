#ifndef LISTS_H
#define LISTS_H

/* Structure for singly-linked list of integers */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototype for printing a list */
size_t print_listint(const listint_t *h);

#endif /* LISTS_H */
