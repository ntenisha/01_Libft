/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:31:15 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/08 20:20:57 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 	DESCRIPTION
** The strncmp() function compares not more than n characters.
** Because strncmp() is designed for comparing strings rather
** than binary data, characters that 	 appear after a `\0'
** character are not compared.
** 	RETURN VALUES
** The strcmp() and strncmp() functions return an integer greater than, equal to,
** or less than 0, according as the string s1 is greater than, equal to, or
** less than the string s2.  The comparison is done using unsigned characters,
**  so that `\200' is greater than `\0'.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (((ptr1[i] != '\0' ) || (ptr2[i] != '\0' )) && (i < n))
	{
		if (ptr2[i] != ptr1[i])
			return (ptr1[i] - s2[i]);
		i++;
	}
	return (0);
}
