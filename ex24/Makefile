# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ewolfghe <ewolfghe@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 03:39:28 by ewolfghe          #+#    #+#              #
#    Updated: 2022/08/28 04:30:35 by ewolfghe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_SRC = ./srcs/
PATH_INCLUDE = ./includes/
FLAGS = -Wall -Wextra -Werror
CC = gcc

SRCS = $(addprefix $(PATH_SRC), \
    ft_putchar.c \
    ft_putstr.c  \
    ft_strcmp.c  \
    ft_strlen.c  \
    ft_swap.c)

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -I $(PATH_INCLUDE) -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
