# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 18:14:01 by ejuana            #+#    #+#              #
#    Updated: 2020/02/22 03:39:39 by ejuana           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= fillit
LIBFT 	= libft.a

CUR_DIR = $(shell pwd)
LIB_DIR = $(CUR_DIR)/libft
OBJ_DIR = $(CUR_DIR)/objects
SRC_DIR	= $(CUR_DIR)/src

SRC		=	main.c		\
			reader.c 	\
			solver.c 	\
			square.c 	\
			termino.c

OBJ 	=	$(SRC:.c=.o)

SRCS 	= $(addprefix $(SRC_DIR)/, $(SRC))
OBJS 	= $(addprefix $(OBJ_DIR)/, $(OBJ))

LIBFT_H = $(LIB_DIR)/includes
FIL_H 	= $(CUR_DIR)/includes

CC 		= gcc
CCFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	make -C $(CUR_DIR) $(OBJS)

$(LIBFT):
	make -C $(LIB_DIR) -I$(LIBFT_H) $(LIBFT)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CCFLAGS) -c $< -o $@ -I$(LIBFT_H) -I$(FIL_H)

$(NAME):
	make -C $(CUR_DIR) $(LIBFT)
	make -C $(CUR_DIR) $(OBJ_DIR)
	$(CC) $(CCFLAGS) -I$(LIBFT_H) -I$(FIL_H) $(LIB_DIR)/$(LIBFT) $(OBJS) -o $(NAME)

clean:
	@make -C $(LIB_DIR) fclean
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

norm:
	@norminette | grep Error
	
.PHONY: all clean fclean re norm
