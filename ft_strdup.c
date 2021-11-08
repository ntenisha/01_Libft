/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:46:57 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/08 20:19:07 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
** 	 The strdup() function allocates sufficient memory
** for a copy of the string s1, does the copy, and
** returns a pointer to it.  The pointer may subsequently
** 	 be used as an argument to the function free(3).
** 	 If insufficient memory is available, NULL is returned
** and errno is set to ENOMEM. The strndup() function copies at
** most n characters from the string s1 always NUL terminating the copied string.
*/
char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	len = ft_strlen(src);
	str = (char *) malloc (sizeof (*str) * (len + 1));
	if (NULL == str)
		return (NULL);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
