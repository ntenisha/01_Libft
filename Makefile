# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 21:05:34 by ntenisha          #+#    #+#              #
#    Updated: 2021/10/27 19:30:42 by ntenisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST =	atoi bzero calloc ft_putchar_fd ft_putstr_fd ft_striteri ft_strjoin ft_strtrim ft_substr isalnum isalpha \
isascii isdigit isprint memchr memcmp memcpy memmove memset strchr strcpy strdup strlcat strlcpy strlen strncmp \
strnstr strrchr tolower toupper ft_itoa ft_strmapi ft_putendl_fd ft_putnbr_fd ft_split

SRCS = $(addsuffix .c, $(LIST))
OBJS = $(addsuffix .o, $(LIST))

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJS) libft.h
	ar rcs $(NAME) $?

.c.o: $(SRCS)
	gcc $(FLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJS)

fclean:
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
