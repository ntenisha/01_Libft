/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:59:41 by ntenisha          #+#    #+#             */
/*   Updated: 2021/11/10 20:55:39 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_kol_slov(char const *s, char c)
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
		if (s[i - 1] != c)
			num++;
	}
	return (num);
}

static	char	**ft_write_words(char **arr, char const *str, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		start = i;
		while (str[i] && str[i] != c)
			i++;
		if (start < i)
		{
			arr[j] = ft_substr(&str[start], 0, i - start);
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
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

	if (!s)
		return (NULL);
	num_w = ft_kol_slov(s, c);
	str = (char **) malloc (sizeof (char *) * (num_w + 1));
	if (!str)
		return (NULL);
	str = ft_write_words(str, s, c);
	return (str);
}
