# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nabbassi <nabbassi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/20 16:33:01 by nabbassi          #+#    #+#              #
#    Updated: 2020/08/20 14:29:46 by nabbassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strdup.c ft_strstr.c ft_strncat.c ft_strcat.c ft_strchr.c \
       ft_strrchr.c ft_strcpy.c ft_strncpy.c ft_isalpha.c ft_isdigit.c \
       ft_isprint.c ft_tolower.c ft_toupper.c ft_strcmp.c ft_strncmp.c \
       ft_isalnum.c ft_strlen.c ft_strlcat.c ft_strnstr.c ft_bzero.c \
       ft_memcpy.c ft_isascii.c ft_putchar.c ft_putchar_fd.c \
       ft_putstr.c ft_putstr_fd.c ft_putendl_fd.c ft_putendl.c ft_putnbr.c \
       ft_putnbr_fd.c ft_atoi.c ft_memcmp.c ft_memchr.c ft_memccpy.c \
       ft_memmove.c ft_memset.c ft_memalloc.c ft_memdel.c ft_strnew.c \
       ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
       ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strjoin.c ft_strsub.c \
       ft_strtrim.c ft_itoa.c ft_strsplit.c

OUT = $(SRCS:.c=.o)
INCLUDES = ./includes

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(SRCS) -I$(INCLUDES)
		ar rc $(NAME) $(OUT)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OUT)

fclean: clean
		/bin/rm -f $(NAME)	

re: fclean all
