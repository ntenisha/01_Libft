SRCS_F	= memset bzero memcpy memmove memchr strlen isalpha isdigit isalnum \
				isascii isprint toupper tolower strchr strrchr strncmp strlcat strnstr

SRCS	= $(addprefix $(SRCS_D), $(SRCS_F))
HEADER	= -I ./includes/ft.h

OBJS	= $(SRCS:.c=.o)

NAME	= libft.a

CC		= gcc
RM		= rm -f
ARRC	= ar rc
RUNL	= runlib

CFLAGS	= -Wall -Werror -Wextra -c

all:	$(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $(HEADER) $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	$(ARRC) $(NAME) $(OBJS)

runlib:
		
	$(RUNL) $(NAME)


$(info $(OBJS))

all:	$(NAME)

clean:
	rm $(OBJS)

fclean:	clean
	rm $(NAME)

re: fclean all

.PHONY:	all	clean	fclean	re
