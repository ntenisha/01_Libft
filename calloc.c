void *ft_calloc(size_t num, size_t size)
{
    char	*arr;
	size_t	i;
	size_t	num_size;
	
	i = 0;
	num_size = num * size;
	if (!(arr = malloc(num * size)))
		return (NULL);
	while (i < num_size)
	{
	    arr[i] = 0;
	    i++;
	}
	return ((void *)arr);
}
