# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ejuana <ejuana@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 18:14:01 by ejuana            #+#    #+#              #
#    Updated: 2020/02/22 02:00:58 by ejuana           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
LIBFT = libft.a

CUR_DIR = $(shell pwd)
LIB_DIR = $(CUR_DIR)/libft
OBJ_DIR = $(CUR_DIR)/objects
SRC_DIR	= $(CUR_DIR)/src

SRC		=	main.c		\
			reader.c 	\
			solver.c 	\
			square.c 	\
			tetrimino.c

OBJ 	=	$(SRC:.c=.o)

SRCS = $(addprefix $(SRC_DIR)/, $(SRC))
OBJS = $(addprefix $(OBJ_DIR)/, $(OBJ))

LIBFT_H = -I $(LIB_DIR)/includes

CC = gcc
CCFLAGS = -Wall -Werror -Wextra $(LIBFT_H)

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	make -C $(CUR_DIR) $(OBJS)

$(LIBFT):
	@make -C $(LIB_DIR) $(LIBFT)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(CCFLAGS) -c $< -o $@ 

$(NAME):
	@make -C $(CUR_DIR) $(LIBFT)
	@make -C $(CUR_DIR) $(OBJ_DIR)
	@$(CC) $(CCFLAGS) $(LIBFT_H) $(LIB_DIR)/$(LIBFT) $(OBJS) -o $(NAME)

clean:
	@make -C $(LIB_DIR) fclean
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

norm:
	@norminette | grep Error
	
.PHONY: all clean fclean re norm

# NAME	:= fillit 

# SRC_DIR	:= ./src
# INC_DIR	:= ./includes
# OBJ_DIR	:= ./obj
# LIB_DIR	:= ./libft

# SRC		:= main.c \
# 		   reader.c \
# 		   solver.c \
# 		   square.c \
# 		   tetrimino.c
# OBJ		:= $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

# CC		:= gcc
# CFLAGS	:= -Wall -Wextra -Werror

# all:
# 	mkdir -p $(OBJ_DIR)
# 	@$(MAKE) -C $(LIB_DIR)
# 	@$(MAKE) $(NAME)

# $(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
# 	$(CC) $(CFLAGS) $(LIB_INC) -I $(INC_DIR) -o $@ -c $<

# $(NAME): $(OBJ)
# 	$(CC) $(OBJ) $(LIB_LNK) -o $(NAME)

# clean:
# 	rm -rf $(OBJ_DIR)

# fclean: clean
# 	rm -rf $(NAME)

# re:
# 	@$(MAKE) fclean
# 	@$(MAKE) all

# norm:
# 	@norminette | grep Error
	
# .PHONY: all clean fclean re norm