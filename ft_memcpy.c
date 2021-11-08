/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:24:19 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/08 20:17:00 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** 		The memcpy() function copies n bytes from memory
** area src to memory area dst.  If dst and src overlap, behavior is undefined.
** Applications in which dst and src might overlap should use memmove(3) instead.
** RETURN VALUES
** 		The memcpy() function returns the original value of dst.
*/
void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*de;
	unsigned char	*sr;

	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (!de && !sr)
		return (NULL);
	while (len > 0)
	{
		*de = *sr;
		de++;
		sr++;
		len--;
	}
	return (dest);
}
