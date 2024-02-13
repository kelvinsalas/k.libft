# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksalas-o <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/31 10:44:48 by ksalas-o          #+#    #+#              #
#    Updated: 2024/01/31 11:08:28 by ksalas-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME    = libft.a
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -g
RM      = rm -rf
AR      = ar rcs
LIB     = ranlib
MKDIR   = mkdir -p

SRCS    = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_bzero.c ft_calloc.c \
			ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_atoi.c ft_strchr.c ft_strdup.c \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
			ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c \

OBJS    = $(SRCS:.c=.o) $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)

bonus: $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(LIB) $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
