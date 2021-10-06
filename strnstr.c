/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:31:32 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/06 20:39:54 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (*little == '\0')
        return ((char *)big);
    while( big[i] != '\0' && i <= len)
    {
        j = 0;
        while (little[j] != '\0' && i + j <= len && big[i + j] == little[j])
            j++;
        if (little[j] == '\0')
            return ((char*)big + i);
        i++;
    }
    return ((void *)0);
}