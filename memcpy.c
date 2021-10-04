void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char *de;
	unsigned char *sr;
	
	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	
	while (len > 0)
	{
		*de = *sr;
		de++;
		sr++;
		len--;
	}
	return(dest);
}
