/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:31:49 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/08 20:18:29 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
**	  The strchr() function locates the first occurrence
** of c (converted to a char) in the string pointed to by s.
** The terminating null character is consid-
**	  ered to be part of the string; therefore if c is `\0',
**  the functions locate the terminating `\0'.
**	  The strrchr() function is identical to strchr(),
** except it locates the last occurrence of c.
** RETURN VALUES
**	  The functions strchr() and strrchr() return a pointer to the located
**  character, or NULL if the character does not appear in the string.
*/
char	*ft_strrchr(const char *str, int ch)
{
	char	*ptr;

	ptr = (char *)str + ft_strlen(str);
	while (ptr >= str)
	{
		if (*ptr == (char)ch)
			return (ptr);
		ptr--;
	}
	return ((void *)0);
}
