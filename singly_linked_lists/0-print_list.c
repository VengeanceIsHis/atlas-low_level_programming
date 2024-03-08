#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
    int n=0;
    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)");
        }
    size_t n = n + h->str;
    h = h->next;
    }
}