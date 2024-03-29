/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:45:39 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/10 21:02:35 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** 		The atoi() function converts the initial portion
** of the string pointed to by str to int representation.
** 		While the atoi() function uses the current locale,
** the atoi_l() function may be passed a
** 		locale directly. See xlocale(3) for more information.
*/
int	ft_atoi(const char *str)
{
	int		minus;
	long	value;

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
		if ((value * minus) < -2147483648)
			return (0);
		if (value > 2147483647)
			return (-1);
		value = (value * 10) + ((*str) - '0');
		str++;
	}
	return (value * minus);
}
