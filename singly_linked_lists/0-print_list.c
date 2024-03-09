#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

size_t print_list(const list_t *h)
{
    size_t n = 0; 
    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)");
        }
        else
        {
            printf("[%lu] %s\n", n, h->str);
            h = h->next;
            n = n + 1;
        }
    }
    return (n);
}