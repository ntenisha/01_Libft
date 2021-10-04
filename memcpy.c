/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:24:19 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/04 19:25:28 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*de;
	unsigned char	*sr;

	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	while (len > 0)
	{
		*de = *sr;
		de++;
		sr++;
		len--;
	}
	return (dest);
}
