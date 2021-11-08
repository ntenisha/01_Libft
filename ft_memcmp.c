/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:46:42 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/08 20:16:39 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 		DESCRIPTION
** The memcmp() function compares byte string s1 against
** byte string s2.  Both strings are assumed to be n bytes long.
** 		RETURN VALUES
** 	The memcmp() function returns zero if the two strings
** are identical, otherwise returns the difference
** between the first two differing  bytes (treated as unsigned
** char values, so that `\200' is greater than `\0', for example).
** Zero-length strings are always identical.
** This behavior is not required by C and portable code should
** only depend on the sign of the returned value.
*/
int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)buf1;
	ptr2 = (unsigned char *)buf2;
	while (i < count)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
