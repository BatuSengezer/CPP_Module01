# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsengeze <bsengeze@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/25 23:49:55 by bsengeze          #+#    #+#              #
#    Updated: 2023/12/26 23:24:38 by bsengeze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hiThisIsBrain
CC = g++
RM = rm -rf
FLAGS = -std=c++98 -Wall -Wextra -Werror
INCLUDES = -I./includes
OBJ_DIR = objs/
SRC_DIR = srcs/
GREEN   = \033[32;1m
RESET	= \033[0m

SRC 	= main.cpp
SRCS	= $(addprefix $(SRC_DIR), $(SRC))

OBJ		= $(SRC:.cpp=.o)
OBJS 	= $(addprefix $(OBJ_DIR), $(OBJ))

all: $(OBJ_DIR) $(SRCS) $(OBJS) $(NAME) 

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(OBJS) -o $(NAME)
		@echo "$(GREEN) Compiled with $(FLAGS)$(RESET)"

clean:
		$(RM) $(OBJ_DIR)
		@echo "$(GREEN) Cleaned $(RESET)"

fclean: clean
		$(RM) $(NAME)
		@echo "$(GREEN) Full cleaned $(RESET)"

re: fclean all

.PHONY: all clean fclean re
