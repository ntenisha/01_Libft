#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  len_s;
    size_t  len_d;
    
    len_s = ft_strlen(src);
    len_d = ft_strlen(dst);
    i = 0;
    j = len_d;
    if (len_d < size - 1 && size > 0)
    {
        while (src[i] && len_d + i < size - 1)
        {
            dst[j] = src [i];
            j++;
            i++;
        }
        dst[j] = '\0';
    }
    if (len_d >= size)
        len_d = size;
    return (len_d + len_s);
}
