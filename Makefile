# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 21:05:34 by ntenisha          #+#    #+#              #
#    Updated: 2021/11/08 18:41:43 by ntenisha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST =	atoi.c  bzero.c  calloc.c  ft_itoa.c  ft_putchar_fd.c  ft_putendl_fd.c  ft_putnbr_fd.c  ft_putstr_fd.c  ft_split.c  \
ft_striteri.c  ft_strjoin.c  ft_strmapi.c  ft_strtrim.c  ft_substr.c  isalnum.c  isalpha.c  isascii.c  isdigit.c  isprint.c  \
memchr.c  memcmp.c  memcpy.c  memmove.c  memset.c  old_make  strchr.c  strcpy.c  strdup.c  strlcat.c  strlcpy.c  strlen.c  \
strncmp.c  strnstr.c  strrchr.c  tolower.c  toupper.c

LIST_B =

OBJ = $(patsubst %.c,%.o,$(LIST))
OBJ_B = $(patsubst %.c,%.o,$(LIST_B))

D_FILES = $(patsubst %.c,%.o,$(LIST) $(LIST_B))

OPTFLAGS = -02
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c
	gcc $(FLAGS) $(OPTFLAGS) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

bonus :
	@make OBJ="$(OBJ_B)" all

clean :
	@rm -f $(OBJ) $(OBJ_B) $(D_FILES)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re bonus
