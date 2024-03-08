#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

size_t print_list(const list_t *h)
{
    char *num;
    size_t n = 0;
    int m;
    while (h != NULL)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)");
        }
    num = h->str;
    m = string_to_int(num);
    n = n + m;
    h = h->next;
    }
    return (n);
}
int string_to_int(char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-')
    {
        sign = -1;
        i = 1;
    }

    for (; str[i] != '\0'; i++)
    {
        result = result * 10 + (str[i] - '0');
    }

    return sign * result;
}