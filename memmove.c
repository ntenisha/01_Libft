/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:25:36 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/04 19:25:38 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memmove(void* dest, const void *src, size_t count)
{
	unsigned char *de;
	unsigned char *sr;
	
	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (!de && !sr)
		return (NULL);
	if  (de < sr)
	{
	    while (count > 0)
	    {
		    *de = *sr;
		    count--;
		    *sr++;
		    *de++;
	    }
	}
	else
	{
	    de = de + count;
	    sr = de + count;
	    while (count > 0)
	    {
		    *de = *sr;
		    count--;
		    *sr--;
		    *de--;
	    }
	}
	return (dest);
}
