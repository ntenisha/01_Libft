/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:29:08 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/07 22:17:44 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t len)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	sy;

	i = 0;
	ptr = (unsigned char *)str;
	sy = (unsigned char )ch;
	while (i < len)
	{
		if (ptr[i] == sy)
			return ((char *)ptr + i);
		i++;
	}
	return ((void *)0);
}
