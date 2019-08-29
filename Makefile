# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/20 17:54:35 by cyluu             #+#    #+#              #
#    Updated: 2019/08/29 13:07:20 by cyluu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM = rm -rf .o

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
		ft_memset.c ft_memchr.c ft_memccpy.c ft_memcpy.c ft_memmove.c ft_putchar_fd.c ft_putchar.c\
		ft_putendl_fd.c ft_putendl.c ft_putnbr.c ft_putstr_fd.c ft_putstr.c ft_strclr.c ft_strcmp.c ft_strdel.c\
		ft_strdup.c ft_strlen.c ft_strncpy.c ft_tolower.c ft_toupper.c ft_strcpy.c ft_strcat.c ft_strchr.c\
		ft_strrchr.c ft_putnbr_fd.c ft_strnstr.c ft_strncmp.c ft_strlcat.c ft_striter.c

HDR = ./includes/

CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

$(NAME):
		@gcc $(CFLAGS) -c $(SRC)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
