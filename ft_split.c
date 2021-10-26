/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:59:41 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/26 22:10:01 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	kol_slov(char const *s, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if(s[i - 1] !=c)
			num++;
	}
	return (num);
}

/*
** Parameters
** 		#1.  The string to be split.
** 		#2.  The delimiter character.
** Return value
** 		The array of new strings resulting from the split.
** 		NULL if the allocation fails.
** External functs.
** 		malloc, free
** Description
** 		Allocates (with malloc(3)) and returns an array
** of strings obtained by splitting ’s’ using the
** character ’c’ as a delimiter.  The array must be
** ended by a NULL pointer.
*/
char	**ft_split(char const *s, char c)
{
	char	**str;
	int		num_w;

	if (!s || !c)
		return (NULL);
	num_w = kol_slov(s,c);
	str = (char **) malloc (sizeof (*s) * (num_w + 1));
	if (!str)
		return (NULL);



	return(str);
}

#include <stdio.h>
int main(void)
{
	char *s = "ZZZZaaaaaaaaaaZZZZaaaaaaaaZZZZ";
	char c = 'Z';
	printf ("%d \n" , kol_slov(s,c));
	return (0);
}
