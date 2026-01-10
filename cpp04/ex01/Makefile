# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaland <agaland@student.42belgium.be>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/10 20:32:30 by agaland           #+#    #+#              #
#    Updated: 2026/01/10 20:32:31 by agaland          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iDontWantToSetTheWorldOnFire

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJ_DIR = objs
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJ_DIR)
	@echo "object dir deleted"

fclean: clean
	@rm -rf $(NAME)
	@echo "exec file deleted"

re: fclean all

run: all
	@./iDontWantToSetTheWorldOnFire

.PHONY: all clean fclean re run