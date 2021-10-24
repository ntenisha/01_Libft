/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:59:28 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/24 20:12:40 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_kol_des(int z)
{
	int	i;
	int	minus;

	i = 1;
	if (z < 0)
		minus = 1;
	else
		minus = 0;
	while (z > 9 || z < -9)
	{
		z = z / 10;
		i++;
	}
	return (i + minus);
}

/*
** The string representing the integer.  NULL if the
** allocation fails.
** Parameters	#1.  the integer to convert.
** Return value	The string representing the integer.  NULL if the
** allocation fails.
** Allocates (with malloc(3)) and returns a string
** representing the integer received as an argument.
** Negative numbers must be handled.
*/
char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = ft_kol_des(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	str[i--] = '\0';
	while (n > 0 || n < 0)
	{
		if (n < 0)
			str[i] = (char )(-(n % 10) + '0');
		else
			str[i] = (char )((n % 10) + '0');
		n = n / 10;
		i--;
	}
	return (str);
}
