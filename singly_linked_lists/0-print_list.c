#include "lists.h"
#include <stdio.h>
#include <stddef.h>

size_t print_list(const list_t *h)
{
    char *num = h->str;
    size_t n = 0;
    int m;
    while (h->next != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)");
        }
    m = atoi(num);
    n = n + m;
    h = h->next;
    }
    return (n);
}