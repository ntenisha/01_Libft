/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:20:52 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/04 19:21:19 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *s, size_t num)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (num > 0)
	{
		*ptr = '\0';
		num--;
		*ptr++;
	}
}
