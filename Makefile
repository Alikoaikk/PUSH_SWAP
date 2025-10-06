# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akoaik <akoaik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 22:28:32 by akoaik            #+#    #+#              #
#    Updated: 2025/07/09 22:28:34 by akoaik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = cc
CFLAGS  = -Wall -Wextra -Werror -I includes

SRC_DIR = src
SRC     = $(SRC_DIR)/a_oper.c \
          $(SRC_DIR)/b_oper.c \
          $(SRC_DIR)/ft_split.c \
          $(SRC_DIR)/oper.c \
          $(SRC_DIR)/parsing.c \
          $(SRC_DIR)/push_swap.c \
          $(SRC_DIR)/radix_sort.c \
          $(SRC_DIR)/sort_five.c \
          $(SRC_DIR)/st_arr.c \
          $(SRC_DIR)/stack_operation.c \
          main.c
OBJ     = $(SRC:.c=.o)
NAME    = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all