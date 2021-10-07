int ft_atoi(char *str)
{
	int minus;
	int value;

	minus = 1;
	value = 0;
	while (((*str) >= 9 && (*str) <= 13) || ((*str) == 32))
		str++;
	if (((*str) == '+') || ((*str) == '-'))
	{
		if ((*str) == '-')
			minus = -1;
		str++;
	}
	while (((*str) >= '0') && ((*str) <= '9'))
	{
		value = (value * 10) + ((*str) - '0');
		str++;
	}
	return (value * minus);
}
