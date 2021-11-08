/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:44:58 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/08 20:12:39 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 		Parameters
** #1.  The string from which to create the substring.
** #2.  The start index of the substring in the string
** ’s’.
** #3.  The maximum length of the substring.
** 		Return value
** The substring.  NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_s1;
	char	*str;

	if (!s)
		return (NULL);
	len_s1 = ft_strlen(s);
	if (len_s1 < (start + len))
		len = len_s1 - start;
	if (len_s1 < start)
		len = 0;
	str = (char *) malloc (sizeof (*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
