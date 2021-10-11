/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:45:39 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/07 22:13:51 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	minus;
	int	value;

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
	if (value > 2147483647)
	    return (0);
	if (value < -2147483648)
	    return (-1);   
	return (value * minus);
}
