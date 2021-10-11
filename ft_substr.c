size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_substr2(char const *s, unsigned int start, size_t len)
{
    size_t	i;
	char	*str;

	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
    while (str [i] && i < len)
    {
		str[i] = s[i + start];
		i++;
    }
    str[i] = '\0';
    return (str);
}

int main(void)
{
	char *s = ft_substr("tripouille", 0, 42000);
    printf("%s \n", s);

	s = ft_substr("tripouille", 1, 1);
    printf("%s \n", s);
	s = ft_substr("tripouille", 100, 1);
    printf("%s \n", s);

	char * str = strdup("1");
	s = ft_substr(str, 42, 42000000);
    printf("%s \n", s);

	str = strdup("0123456789");
	s = ft_substr(str, 9, 10);
    printf("%s \n", s);

	s = ft_substr("42", 0, 0);
    printf("%s \n", s);

	str = strdup("0123456789");
	s = ft_substr(str, 1, 5);
    printf("%s \n", s);
    
    return (0);
}
