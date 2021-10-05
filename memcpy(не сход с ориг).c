/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:24:19 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/04 19:25:28 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*de;
	unsigned char	*sr;

	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	while (len > 0)
	{
		*de = *sr;
		de++;
		sr++;
		len--;
	}
	return (dest);
}

void	*ft_memcpy2(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

void	*ft_memcpy3(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst_byte;
	const unsigned char	*src_byte;

	i = 0;
	dst_byte = dst;
	src_byte = src;
	while (i < n)
	{
		dst_byte[i] = src_byte[i];
		i++;
	}
	return (dst);
}

int main (void)
{
    char string00 [] = "stackoverflow";
    char *third00;
    third00 = string00;

    puts(string00);
    memcpy(third00+5, third00, 7);
    puts(third00);

printf(" mymy \n");

    char string01 [] = "stackoverflow";
    char *third01;
    third01 = string01;

    puts(string01);
    ft_memcpy(third01+5, third01, 7);
    puts(third01);

printf(" from git \n");

    char string02 [] = "stackoverflow";
    char *third02;
    third02 = string02;

    puts(string02);
    ft_memcpy2(third02+5, third02, 7);
    puts(third02);
    
printf(" from git2 \n");

    char string03 [] = "stackoverflow";
    char *third03;
    third03 = string03;

    puts(string03);
    ft_memcpy3(third03+5, third03, 7);
    puts(third03);
    
    return 0;
}
