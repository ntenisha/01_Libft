/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:46:17 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/10 21:02:42 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The calloc() function contiguously allocates enough space for
** count objects that are size bytes of memory
** each and returns a pointer to the allocated memory.
** The allocated memory is filled with bytes of value zero.
*/
void	*ft_calloc(size_t num, size_t size)
{
	char	*arr;
	size_t	i;
	size_t	num_size;

	i = 0;
	num_size = num * size;
	arr = malloc (num * size);
	if (! (arr))
		return (NULL);
	while (i < num_size)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
