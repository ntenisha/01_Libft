char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	len = ft_strlen(src);
	str = (char *) malloc (sizeof (*str) * (len + 1));
	if (NULL == str)
		return (NULL);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
