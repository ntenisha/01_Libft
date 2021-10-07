# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 21:05:34 by ntenisha          #+#    #+#              #
#    Updated: 2021/10/07 21:07:09 by ntenisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST =	memset bzero memcpy memmove memchr memcmp strlen isalpha isdigit isalnum \
		isascii isprint toupper tolower strchr strrchr strncmp strlcpy strlcat strnstr \
		atoi calloc strdup \

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