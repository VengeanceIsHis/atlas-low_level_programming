#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
    size_t n=0;
    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)");
        }
    n = atoi(n + h->str);
    h = h->next;
    }
    return (n);
}