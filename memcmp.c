int ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
    size_t          i;
    unsigned char   *ptr1;
    unsigned char   *ptr2;
    
    i = 0;
    ptr1 = (unsigned char *)buf1;
    ptr2 = (unsigned char *)buf2;
	while (i < count)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
    return (0);
}
