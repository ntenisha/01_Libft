size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t	len;
    size_t	i;
    size_t	j;
    char    *str;
    
    i = 0;
    j = 0;
    if (!str)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while(s1[i])
	{
        str[i] = s1[i];
	    i++;
	}
	while(s2[j])
	{
        str[i] = s2[j];
        j++;
        i++;
	}
	str[i] = '\0';
    return (str);
}


int main(void)
{
    char *s = ft_strjoin("tripouille", "42");
    printf("%s \n", s);
    return (0);
}
