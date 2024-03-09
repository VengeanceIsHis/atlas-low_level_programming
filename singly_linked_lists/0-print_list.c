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
            n + 1;
            h = h->next;
        }
    }
    return (n);
}