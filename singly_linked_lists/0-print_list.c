#include "lists.h"
#include <stddef.h>
#include <stdio.h>

size_t print_list(const list_t *h)
{
    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)");
        }
    h = h->next;
    }
}