/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:31:49 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/07 22:26:03 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*ptr;

	ptr = (char *)str + ft_strlen(str);
	while (ptr >= str)
	{
		if (*ptr == ch)
			return (ptr);
		ptr--;
	}
	return ((void *)0);
}
