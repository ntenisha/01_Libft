/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:25:36 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/04 19:25:38 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*   ft_memmove(void* dest, const void *src, size_t count)
{
	unsigned char *de;
	unsigned char *sr;
	
	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (!de && !sr)
		return (NULL);
	while (count > 0)
	{
		*de = *sr;
		count--;
		*sr++;
		*de++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
char str1[40], str2[40];
strcpy(str1, "Born to code in C/C++.");
memmove(str2, str1, strlen(str1));
printf(str2);
return 0;
}
