/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:31:00 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/08 20:19:44 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strlcat() appends string src to the end of dst.  It will append
** at most dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate,
**  unless dstsize is 0 or the original dst string was longer than dstsize
** (in practice this should not happen as it means that either dstsize is
** incorrect or that dst is not a proper string).
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_s;
	size_t	len_d;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	i = 0;
	j = len_d;
	if (len_d < size - 1 && size > 0)
	{
		while (src[i] && len_d + i < size - 1)
		{
			dst[j] = src [i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (len_d >= size)
		len_d = size;
	return (len_d + len_s);
}
