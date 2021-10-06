#include "libft.h"

char *ft_strrchr(const char *str, int ch)
{
    char    *ptr;

    ptr = (char *)str + ft_strlen(str);
    while (ptr >= str)
    {
        if (*ptr == ch)
            return (ptr);
        ptr--;
    }
    return ((void*)0);
}
