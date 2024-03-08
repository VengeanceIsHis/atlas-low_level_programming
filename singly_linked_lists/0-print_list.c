#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
    size_t n=0;
    int m;
    while (h->next != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)");
        }
    m = atoi(h->str);
    n = n + m;
    h = h->next;
    }
    return (n);
}