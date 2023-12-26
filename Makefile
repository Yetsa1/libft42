# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeparra- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 12:37:52 by yeparra-          #+#    #+#              #
#    Updated: 2023/11/13 21:39:41 by yeparra-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC = gcc
CFLAGS	=	-Wall -Werror -Wextra -I $(INCLUDE)
RM = rm -f
AR = ar rcs

SRC	=	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

INCLUDE = libft.h

all: $(NAME)
		@echo "Súper!"


$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

%.o: %.c
		$(CC) -c $(CFLAGS) $< -o $@

clean:
		$(RM) $(OBJ)
		@echo "FATALITY!"

fclean: clean
		$(RM) $(NAME)
		@echo "funcion muerta"

re: fclean all

.PHONY: all clean fclean re
