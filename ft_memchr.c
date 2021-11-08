/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:29:08 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/08 20:15:28 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** The memchr() function locates the first occurrence of c
** (converted to an unsigned char) in string s.
** RETURN VALUES
** 		The memchr() function returns a pointer to the byte
** located, or NULL if no such byte exists within n bytes.
*/
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
