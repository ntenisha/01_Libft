/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:25:59 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/08 20:17:49 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** 		The memset() function writes len bytes of value
**   c (converted to an unsigned char) to the string b.
** RETURN VALUES
** 	The memset() function returns its first argument.
*/
void	*ft_memset(void *memptr, int val, size_t num)
{
	unsigned char	*ptr;
	unsigned char	simbol;

	ptr = (unsigned char *)memptr;
	simbol = (unsigned char)val;
	while (num > 0)
	{
		*ptr = simbol;
		num--;
		ptr++;
	}
	return (memptr);
}
