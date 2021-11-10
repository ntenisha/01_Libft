/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:20:52 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/10 21:02:39 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t num)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (num > 0)
	{
		*ptr = '\0';
		num--;
		ptr++;
	}
}
