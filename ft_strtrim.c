/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:08:07 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/08 20:35:06 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Parameters
** 		#1.  The string to be trimmed.
** 		#2.  The reference set of characters to trim.
** Return value
** 		The trimmed string.  NULL if the allocation fails.
** External functs.
** 		malloc
** Description
** 		Allocates (with malloc(3)) and returns a copy of
** ’s1’ with the characters specified in ’set’ removed
** from the beginning and the end of the string.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	na4alo;
	size_t	konec;

	if (!s1 || !set)
		return (NULL);
	na4alo = 0;
	konec = ft_strlen(s1);
	while (s1[na4alo] && ft_strchr(set, s1[na4alo]))
		na4alo++;
	while (konec > na4alo && ft_strrchr(set, s1[konec - 1]))
		konec--;
	return (ft_substr(s1, na4alo, konec - na4alo));
}
