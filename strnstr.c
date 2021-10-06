char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (*little == '\0')
        return ((char *)big);
    while( big[i] != '\0' && i <= len)
    {
        j = 0;
        while (little[j] != '\0' && i + j <= len && big[i + j] == little[j])
            j++;
        if (little[j] == '\0')
            return ((char*)big + i);
        i++;
    }
    return ((void *)0);
}

int	main(void)
{
	char	ptr1[] = {"1234567890123456789"};
	char	ptr2[] = {"01"};

	printf("%s %s\n", ptr1, ptr2);
	printf("%s \n", ft_strnstr(ptr1, ptr2, 19));
//	printf("%c \n", strnstr(ptr1, ptr2, 3));


	return (0);
}
