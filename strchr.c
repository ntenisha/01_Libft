/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:30:30 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/07 22:22:16 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int				i;
	unsigned char	sym;

	i = 0;
	sym = ch;
	while (str[i])
	{
		if (str[i] == sym)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == sym)
		return ((char *)(str + i));
	return ((void *)0);
}
