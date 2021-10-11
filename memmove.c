/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:25:36 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/07 22:20:42 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char	*de;
	unsigned char	*sr;

	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (!de && !sr)
		return (NULL);
	if (de < sr)
		while (count--)
			*de++ = *sr++;
	else
	{
		de = de + count - 1;
		sr = sr + count - 1;
		while (count--)
			*de-- = *sr--;
	}
	return (dest);
}
