# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aechafii <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 16:24:29 by aechafii          #+#    #+#              #
#    Updated: 2021/11/20 09:54:15 by aechafii         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_atoi.c ft_isascii.c ft_memcmp.c \
	  ft_strdup.c ft_strlen.c ft_strtrim.c ft_bzero.c ft_isdigit.c \
	  ft_memcpy.c ft_striteri.c ft_strmapi.c ft_substr.c ft_calloc.c ft_isprint.c ft_memmove.c ft_strjoin.c \
	  ft_strncmp.c ft_tolower.c ft_isalnum.c ft_memset.c ft_strlcat.c ft_strnstr.c ft_toupper.c \
	  ft_isalpha.c ft_memchr.c ft_strchr.c ft_strrchr.c ft_split.c 
OBJ = $(SRC:.c=.o)
GCC_FLAGS = -Wall -Wextra -Werror
CC = gcc
HEADER = libft.h
AR = ar rc
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(AR) $(NAME) $(OBJ)
%.o: %.c
	$(CC) -I$(HEADER) $(GCC_FLAGS) -c $<
clean:
	rm -f *.o

fclean:
	rm -f *.o $(NAME)

re: fclean all
