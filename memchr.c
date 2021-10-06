void    *ft_memchr(const void *str, int ch, size_t len)
{
    size_t  i;
    unsigned char   *ptr;

    i = 0;
    ptr = (unsigned char *)str;
    while( ptr[i] != '\0' && i <= len)
    {
        if (ptr[i] == (char)ch)
            return ((char*)ptr + i);
        i++;
    }
    return ((void *)0);
}
