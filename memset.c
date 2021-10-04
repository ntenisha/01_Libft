/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:25:59 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/04 19:27:32 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		*ptr++;
	}
	return (memptr);
}
