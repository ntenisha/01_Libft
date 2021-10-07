/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:29:52 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/06 20:51:36 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

void	ft_bzero(void *s, size_t num);
int	    ft_isalnum(char c);
int	    ft_isalpha(char c);
int	    ft_isascii(int c);
int	    ft_isdigit(char c);
int	    ft_isprint(char c);
void    *ft_memchr(const void *str, int ch, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void    *ft_memmove(void* dest, const void *src, size_t count);
void	*ft_memset(void *memptr, int val, size_t num);
char    *ft_strchr(const char *str, int ch);
size_t  ft_strlcpy (char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
size_t  ft_strlen(const char *str);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strrchr(const char *str, int ch);
int     ft_tolower(int c);
int     ft_toupper(int c);

#endif
