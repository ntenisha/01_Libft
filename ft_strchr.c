/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:30:30 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/08 20:18:22 by ntenisha         ###   ########.fr       */
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
char	*ft_strchr(const char *str, int ch)
{
	int				i;
	unsigned char	sym;

	i = 0;
	sym = ch;
	while (str[i])
	{
		if (str[i] == sym)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == sym)
		return ((char *)(str + i));
	return ((void *)0);
}
