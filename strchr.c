/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:30:30 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/06 20:39:09 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int ch)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] == ch)
            return ((char *)(str + i));
        i++;
    }
    if (str[i] == ch)
        return ((char *)(str + i));
    return ((void *)0);
}