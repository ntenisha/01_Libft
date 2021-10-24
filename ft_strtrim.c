/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:08:07 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/24 17:58:36 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
*/

static	size_t	check_symb(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static	size_t	find_s_f(char const *s1, char const *set, \
	int na4_or_kon, size_t	len)
{
	size_t	i;

	if (na4_or_kon == 1)
		i = 0;
	else
//		i = len - ft_strlen(set);
		i = len - 1;
	while (s1[i] && check_symb((char)s1[i], set))
	{
		if (na4_or_kon == 1)
			i++;
		else
			i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	na4alo;
	size_t	konec;
	size_t	len;
	char	*array;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	na4alo = find_s_f(s1, set, 1, len);
	konec = find_s_f(s1, set, 0, len);
	array = malloc(sizeof(char) * (konec - na4alo + 1));
	if (!array)
		return (NULL);
	while (i < konec && s1[i + na4alo])
	{
		array[i] = s1[i + na4alo];
		i++;
	}
	array[i] = '\0';
	return (array);
}
